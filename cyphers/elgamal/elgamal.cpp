#include "elgamal.hpp"
#include "../../numbers/factorization.hpp"
#include "../../numbers/discrete_log.hpp"

#include <iostream>

elgamal::elgamal(){}

elgamal::elgamal(uint64_t a, uint64_t mod): a(a), mod(mod) {}

void elgamal::setPrivate(uint64_t x){
    this->x = x;
    b = binPow(a, x, mod);
}

void elgamal::setPublic(uint64_t b){
    x = 0;
    this->b = b;
}

void elgamal::evalPrivate(){
    this->x = dlog_shenks(a, b, mod);
}

uint64_t elgamal::getPublic() { return b; };
uint64_t elgamal::getPrivate() { return x; };

pair<uint64_t, uint64_t> elgamal::encode(const pair<uint64_t, uint64_t>& message) {
    return { binPow(a, message.first, mod), binPow(b, message.first, mod) * message.second % mod };
}

pair<uint64_t, uint64_t> elgamal::decode(const pair<uint64_t, uint64_t>& code) {
    return { binPow(code.first, mod - 1 - x, mod) * code.second % mod,  0};
}

pair<uint64_t, uint64_t> elgamal::sign(uint64_t key, uint64_t message) {
    uint64_t s1 = binPow(a, key, mod);
    return { s1, (mod - 1 + message - x * s1 % (mod - 1)) % (mod - 1) * inverseByModGCD(key, mod - 1) % (mod - 1)};
}

bool elgamal::checkSign(uint64_t message, pair<uint64_t, uint64_t> signature) {
    return binPow(b, signature.first, mod) * binPow(signature.first, signature.second, mod) % mod == binPow(a, message, mod);
}