#ifndef FACTORIES
#define FACTORIES
#include "standard_libraw_decoder.h"
#include <memory>

std::shared_ptr<Generic_raw_decoder> factory_get_decoder_for_file(std::string complete_path);

#endif // FACTORIES

