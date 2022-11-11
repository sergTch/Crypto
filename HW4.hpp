
#ifndef HW4
#define HW4

#include <iostream>
#include "cyphers/RSA/RSA.hpp"
#include "cyphers/elgamal/elgamal.hpp"
#include "numbers/factorization.hpp"
#include "numbers/discrete_log.hpp"
#include "algo/encodings.hpp"
#include "algo/visualisation.hpp"
#include <string>

using namespace std;

void HW4N1(){
    uint64_t mod = 113, a = 3, b = 91, t;

    t = dlog_shenks(a, b, mod);

    cout << "\nanswer = " << t << endl;
    if (binPow(a, t, mod) == b)
        cout << "done\n";
    else cout << "wrong :(\n";
}

void HW4N2(){
    uint64_t mod = 347, a = 3, b = 212, sz = 173, t;

    t = dlog_pollard(a, b, mod, sz);

    cout << "\nanswer = " << t << endl;
    if (binPow(a, t, mod) == b)
        cout << "done\n";
    else cout << "wrong :(\n";
}

void HW4N3(){
    elgamal cr(6, 229);
    cr.setPublic(164);
    cr.evalPrivate();
    
    cout << "encode 217 with key 20: c1 = ";
    show(cr.encode({20, 217}), " c2 = ", "\n");
    cout << "private x: " << cr.getPrivate() << endl;

    cout << "decoded msg: "<< cr.decode({215, 90}).first << endl;
}

void HW4N4(){
    elgamal cr(6, 229);
    cr.setPrivate(81);
    
    auto sgn = cr.sign(91, 111);

    cout << "signature for msg 111 is s1 = ";
    show(sgn, " s2 = ", "\n\ncheck 164 91\n");

    cr.setPublic(78);

    if (cr.checkSign(111, {164, 91}))
        cout << "so 164 91 is a valid signature\n";
    else
        cout << "so 164 91 is not a valid signature\n";
}

#endif