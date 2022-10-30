#include "encodings.hpp"

static inline char digit_to_num(char ch){
    if (ch & 64){
        return (ch & 31) + 9;
    }
    return ch & 15;
}

static inline char num_to_digit(char num){
    if (num > 9)
        return (num - 9) | 64;
    return num | 48;
}

string from_hex(const string& hex){
    string bytes(hex.size() / 2, 0);
    
    for (size_t i = 0; i < bytes.size(); i++){
        bytes[i] |= digit_to_num(hex[i * 2]) << 4;
        bytes[i] |= digit_to_num(hex[i * 2 + 1]);
    }

    return bytes;
}

string to_hex(const string& bytes){
    string hex(bytes.size() * 2, 0);

    for (size_t i = 0; i < bytes.size(); i++){
        hex[2 * i] = digit_to_num((bytes[i] >> 4) & 15);
        hex[2 * i + 1] = digit_to_num(bytes[i] & 15);
    }

    return hex;
}

uint64_t mod100askiiEnc(const string& txt) {
    uint64_t n = 0;
    
    for (int i = 0; i < txt.size(); i++){
        n *= 100;
        n += txt[i];
    }

    return n;
}

string mod100askiiDec(uint64_t n) {
    string txt;

    while (n) {
        txt += n % 100;
        n /= 100; 
    }

    for (int i = 0; i < txt.size() / 2; i++) {
        n = txt[i];
        txt[i] = txt[txt.size() - i - 1];
        txt[txt.size() - i - 1] = n;
    }

    return txt;
}
