/**************************************************************************
**   corentin, 11/01/2017 2017

**This file is part of easy_converter.
**
**easy_converter is free software: you can redistribute it and/or modify
**it under the terms of the GNU General Public License as published by
**the Free Software Foundation, either version 3 of the License, or
**(at your option) any later version.
**
**easy_converter is distributed in the hope that it will be useful,
**but WITHOUT ANY WARRANTY; without even the implied warranty of
**MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**GNU General Public License for more details.
**
**You should have received a copy of the GNU General Public License
**along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************************/

#include "standard_libraw_decoder.h"


Standard_libraw_decoder::Standard_libraw_decoder(std::string complete_path)
{

}

cv::Mat Standard_libraw_decoder::get_decoded_main_matrix()
{
    return cv::Mat();
}

cv::Mat Standard_libraw_decoder::get_decoded_thumbnail()
{
    return cv::Mat();
}

Standard_libraw_decoder::~Standard_libraw_decoder()
{

}
