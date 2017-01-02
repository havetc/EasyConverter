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
