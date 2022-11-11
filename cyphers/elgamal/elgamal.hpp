#ifndef ELGAMAL
#define ELGAMAL

#include "../cypher.hpp"
#include <cstdint>
#include <string>

using namespace std;

class elgamal : cypher<pair<uint64_t, uint64_t>>{
private:
    uint64_t x = 0;
    uint64_t a = 0;
    uint64_t b = 0;
    uint64_t mod = 0;

public:

    uint64_t (*hash)(uint64_t);

    elgamal();
    elgamal(uint64_t a, uint64_t mod);

    void setPrivate(uint64_t x);
    void setPublic(uint64_t b);
    void evalPrivate();

    uint64_t getPublic();
    uint64_t getPrivate();

	pair<uint64_t, uint64_t> encode(const pair<uint64_t, uint64_t>& message);
	pair<uint64_t, uint64_t> decode(const pair<uint64_t, uint64_t>& code);

    pair<uint64_t, uint64_t> sign(uint64_t key, uint64_t message);
    bool checkSign(uint64_t message, pair<uint64_t, uint64_t> signature);
};

#endif