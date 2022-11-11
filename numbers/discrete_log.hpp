#ifndef DISCRETE_LOG
#define DISCRETE_LOG

#include <stdint.h>

uint64_t dlog_shenks(uint64_t a, uint64_t b, uint64_t mod);
uint64_t dlog_pollard(uint64_t a, uint64_t b, uint64_t mod, uint64_t sz);

#endif