// #include "HW3.hpp"

#include <iostream>
// #include <vector>
// #include "cyphers/RSA/RSA.hpp"
// #include "cyphers/caesar/caesar.hpp"
#include "numbers/factorization.hpp"
#include "numbers/discrete_log.hpp"
// #include "algo/bin_search.hpp"
// #include "algo/encodings.hpp"
// #include "algo/visualisation.hpp"

using namespace std;

const int64_t MOD = 998244353;

int main(){
    cout << dlog_pollard(4, 3, 47, 23) << endl;
}
