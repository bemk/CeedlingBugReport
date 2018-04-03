
#ifndef TO_BE_MOCKED_H
#define TO_BE_MOCKED_H

#include <stdint.h>

struct PaddedData {
        uint16_t alpha;
        uint8_t beta;
};

void SomeFunction(struct PaddedData argument);

#endif
