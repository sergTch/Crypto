
#ifndef CYPHER
#define CYPHER

const int ALPHABET_SIZE = 26;

using namespace std;

template<typename T>
class cypher{
public:
	virtual T encode(const T& message) = 0;
	virtual T decode(const T& code) = 0;
	virtual ~cypher(){};
};

#endif
