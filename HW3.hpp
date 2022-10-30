
#ifndef HW3
#define HW3

#include <iostream>
#include "cyphers/RSA/RSA.hpp"
#include "numbers/factorization.hpp"
#include "algo/encodings.hpp"
#include <string>

using namespace std;

void HW3N1(){
    uint64_t n = 98587;

    cout << factor_pollard(n) << endl;
    cout << endl;
}

void HW3N2(){
    uint64_t n = 3751785649;
    uint64_t e = 18181;
    RSA_int rsa(n, e);
    rsa.hash = [](uint64_t x) -> uint64_t { return x; };

    uint64_t sgn;
    uint64_t msg = 15881648;
    cout << "encode: " << msg << " -> " << rsa.encode(msg) << endl << endl;

    sgn = 779150153;
    msg = 8191;
    cout << "msg: " << msg << " sgn: " << sgn << " correct: " << rsa.checkSign(msg, sgn) << endl;
    cout << msg << " is 2 ^ 13 - 1 and prime\n";

    sgn = 3720856771;
    msg = 131071;
    cout << "msg: " << msg << " sgn: " << sgn << " correct: " << rsa.checkSign(msg, sgn) << endl;
    cout << msg << " is 2 ^ 17 - 1 and prime\n";
    
    sgn = 1777950437;
    msg = 524287;
    cout << "msg: " << msg << " sgn: " << sgn << " correct: " << rsa.checkSign(msg, sgn) << endl;
    cout << msg << " is 2 ^ 19 - 1 and prime\n";

    cout << "\nSo all messages are Mersenne primes\n";
    cout << endl;
}

void HW3N3(){
    uint64_t d = 1653279371;
    uint64_t p = 60631;
    uint64_t q = 61879;

    RSA_int rsa(d, p, q);
    rsa.hash = [](uint64_t x) -> uint64_t { return x; };

    string msg = "CIAO";
    uint64_t n = mod100askiiEnc(msg);

    cout << msg << " -> " << n << endl;
    cout << "signature: " << rsa.sign(n) << endl << endl;
    
    uint64_t c = 1113231101;
    cout << "msg: " << mod100askiiDec(rsa.decode(c)) << " ";
    c = 917998221;
    cout << mod100askiiDec(rsa.decode(c)) << endl;
    cout << endl;
}

#endif