#include "factories.h"

std::shared_ptr<Generic_raw_decoder> factory_get_decoder_for_file(std::string complete_path)
{
    switch (/*extension de fichier*/1) {
    case 1:
        return std::shared_ptr<Generic_raw_decoder> (new Standard_libraw_decoder(complete_path)) ;
    default:
        break;
    }
}
