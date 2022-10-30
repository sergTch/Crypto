#ifndef RSA_INT
#define RSA_INT

#include "../cypher.hpp"
#include <cstdint>
#include <string>

using namespace std;

class RSA_int : cypher<uint64_t>{
private:
    uint64_t d = 0;
    uint64_t e = 0;
    uint64_t p = 0;
    uint64_t q = 0;
    uint64_t n = 0;
    uint64_t m = 0;

public:

    uint64_t (*hash)(uint64_t);

    RSA_int();
    RSA_int(uint64_t d, uint64_t p, uint64_t q);
    RSA_int(uint64_t n, uint64_t e);

    void setPrivate();

    uint64_t getPublicE();
    uint64_t getPublicN();

	uint64_t encode(const uint64_t& message);
	uint64_t decode(const uint64_t& code);

    uint64_t sign(uint64_t message);
    bool checkSign(uint64_t message, uint64_t signature);
};

#endif