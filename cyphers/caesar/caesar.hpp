
#ifndef CAESAR
#define CAESAR

#include "../cypher.hpp"
#include <string>
using namespace std;

class caesar : public cypher<string>{
private:
	int key;
public:
	caesar();
	caesar(int key);

	string encode(const string& msg);
	string decode(const string& code);
};

#endif

