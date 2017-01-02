#ifndef GENERIC_RAW_DECODER_H
#define GENERIC_RAW_DECODER_H
#include "cv_temp.h"
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
