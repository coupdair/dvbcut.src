/*  dvbcut
*/

/* $Id$ */

#ifndef _DVBCUT_CIMG_H
#define _DVBCUT_CIMG_H

#include <string>
#include <vector>
#include <list>

template<typename T>
void CImg_print(std::vector<T> single_pixel_sequence, bool show=false);
void CImg_print(std::vector<unsigned char> single_pixel_sequence, bool show=false);

#endif
