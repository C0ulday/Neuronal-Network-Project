#ifndef NETWORK_H
#define NETWORK_H

#include <stdint.h>

#define INPUT_SIZE 22
#define OUTPUT_SIZE 2

void network(const uint8_t* inp, int8_t* out);
void network_hybrid(const uint8_t* inp, int8_t* out);
#endif
