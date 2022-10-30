#ifndef FACTORIZATION
#define FACTORIZATION

#include <stdint.h>
#include <map>

using namespace std;

uint64_t GCD(uint64_t m, uint64_t n);
uint64_t LCM(uint64_t m, uint64_t n);

uint64_t factor_ferma(uint64_t n);
uint64_t factor_pollard(uint64_t n);

map<int64_t, int64_t> getPrimes(int64_t n);

int64_t inverseByMod(int64_t x, int64_t mod, map<int64_t, int64_t>* modPrimes = nullptr);
int64_t inverseByModGCD(int64_t x, int64_t mod)

int64_t eulerFunc(int64_t n, map<int64_t, int64_t>* primes = nullptr);

uint64_t binPow(uint64_t a, uint64_t b);
uint64_t binPow(uint64_t a, uint64_t b, uint64_t mod);

#endif