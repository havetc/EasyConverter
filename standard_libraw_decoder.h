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

#ifndef STANDARD_LIBRAW_DECODER_H
#define STANDARD_LIBRAW_DECODER_H
#include "generic_raw_decoder.h"

class Standard_libraw_decoder : public Generic_raw_decoder
{

public:

    Standard_libraw_decoder() = delete;

    Standard_libraw_decoder(std::string complete_path);


    // Generic_raw_decoder interface
public:
    virtual cv::Mat get_decoded_main_matrix();
    virtual cv::Mat get_decoded_thumbnail();
    ~Standard_libraw_decoder();

};

#endif // STANDARD_LIBRAW_DECODER_H
