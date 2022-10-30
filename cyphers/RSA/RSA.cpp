#include "RSA.hpp"
#include "../../numbers/factorization.hpp"

RSA_int::RSA_int(){}

RSA_int::RSA_int(uint64_t d, uint64_t p, uint64_t q): d(d), p(p), q(q) {
    n = p * q;
    m = (p - 1) * (q - 1);
    e = inverseByModGCD(d, m);
}

RSA_int::RSA_int(uint64_t n, uint64_t e): n(n), e(e){}

void RSA_int::setPrivate(){
    p = factor_pollard(n);
    q = n / p;
    m = (p - 1) * (q - 1);
    d = inverseByMod(e, m);
}

uint64_t RSA_int::getPublicE() { return e; };
uint64_t RSA_int::getPublicN() { return n; };

uint64_t RSA_int::encode(const uint64_t& message) {
    return binPow(message, e, n);
}

uint64_t RSA_int::decode(const uint64_t& code) {
    return binPow(code, d, n);
}

uint64_t RSA_int::sign(uint64_t message) {
    return decode(hash(message));
}

bool RSA_int::checkSign(uint64_t message, uint64_t signature) {
    return encode(signature) == hash(message);
}