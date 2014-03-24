/*  dvbcut
    Copyright (c) 2005 Sven Over <svenover@svenover.de>
 
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


void CImg_print(std::vector<unsigned char> single_pixel_sequence)
{
  //print
  CImg<unsigned char> data(&(single_pixel_sequence[0]),single_pixel_sequence.size());
  data.print("CImg_print/single_pixel_sequence");
  return;
}

