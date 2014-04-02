/*  dvbcut with CImg
    Copyright (c) 2014 SC
 
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
 
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
 
    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/* $Id$ */

#include "cimg.h"

//CImg
#include "CImg.h"
using namespace cimg_library;

//template<typename T>
//void CImg_print(std::vector<T> single_pixel_sequence, bool show)
void CImg_print(std::vector<unsigned char> single_pixel_sequence, bool show
  ,unsigned char* graph,int width,int height
)
{
  //print
//  CImg<T> data(&(single_pixel_sequence[0]),4,single_pixel_sequence.size()/4);
  CImg<unsigned char> data(&(single_pixel_sequence[0]),4,single_pixel_sequence.size()/4);
  data.permute_axes("yzcx");
  data.print("CImg_print/single_pixel_sequence");
  if(show)
  {
    data.display("CImg_print/single_pixel_sequence");
    data.display_graph("CImg_print/display_graph");

    const unsigned char white[]={255,255,255,255};
    const unsigned char red[]={255,0,0,255};
    const unsigned char green[]={0,255,0,255};
    const unsigned char blue[]={0,0,255,255};
    CImg<unsigned char> g(graph,width,height,1,3);
    g.fill(255);
    g.draw_graph(data.get_shared_channel(0),red  ,1,1,1,0,255);
    g.draw_graph(data.get_shared_channel(1),green,1,1,1,0,255);
    g.draw_graph(data.get_shared_channel(2),blue ,1,1,1,0,255);
//    g.mirror('y');//flip
    g.display("CImg_print/draw_graph");
//    g.permute_axes("cxyz");

    data.save("dvbcut_single_pixel_sequence_graph.tif");//see home directory
  }
  return;
}
