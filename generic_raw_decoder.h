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

#ifndef GENERIC_RAW_DECODER_H
#define GENERIC_RAW_DECODER_H
#include <opencv2/opencv.hpp>
#include <string>

/**
 * @brief The generic_raw_decoder class
 * it is an interface, representing all the method needed to work with raw data
 * It will be obtained via Factories, which construct it automatically with the
 * good implementation
 */
class Generic_raw_decoder
{

public:

    virtual cv::Mat get_decoded_main_matrix() = 0;

    virtual cv::Mat get_decoded_thumbnail() = 0;

//    virtual ~Generic_raw_decoder() = 0;

};

#endif // GENERIC_RAW_DECODER_H
