#ifndef ENCODINGS
#define ENCODINGS

#include <string>

using namespace std;

string from_hex(const string& hex);
string to_hex(const string& bytes);

uint64_t mod100askiiEnc(const string& txt);
string mod100askiiDec(uint64_t n);

#endif
