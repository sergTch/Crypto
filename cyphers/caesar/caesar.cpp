#include "caesar.hpp"
#include <iostream>

static string shift_alphabet(const string& str, int shift){
	string rez = str;
	shift %= ALPHABET_SIZE;
	if (shift < 0)
		shift += ALPHABET_SIZE;

	for (int i = 0; i < rez.size(); i++){
		if (rez[i] & 31 && (rez[i] & 31) <= ALPHABET_SIZE){
			rez[i] = ((rez[i] & 31) +  shift - 1) % ALPHABET_SIZE + 1 + (rez[i] & 224);
		}
	}
	return rez;
}

caesar::caesar(){}
caesar::caesar(int key) : key(key) {}

string caesar::encode(const string& msg){
	return shift_alphabet(msg, key);
}

string caesar::decode(const string& code){
	return shift_alphabet(code, -key);
}
