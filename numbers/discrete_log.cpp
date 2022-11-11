#include "discrete_log.hpp"
#include "factorization.hpp"
#include "../algo/visualisation.hpp"
#include "../algo/bin_search.hpp"

#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

uint64_t dlog_shenks(uint64_t a, uint64_t b, uint64_t mod) {    
    int64_t m = sqrt(mod - 1) + 1;
    int64_t am = binPow(a, mod - 1 - m, mod);
    int64_t t = 1;

    vector<pair<uint64_t, uint64_t>> table(m);
    for (int i = 0; i < m; i++) {
        table[i] = {t, i};
        t = t * a % mod;
    }

    sort(table.begin(), table.end());

    cout << "m = " << m << endl << endl;
    show(table, "\n");
    cout << "a^-m = " << am << endl << endl;

    auto find = [&table, &b](int64_t idx) {
        return table[idx].first <= b;
    };
    
    for (int i = 0; i < m; i++){
        cout << b << endl;
        t = bin_search(0, m, find);
        if (table[t].first == b)
            return i * m + table[t].second;
        b = b * am % mod;
    }

    return 0;
}

uint64_t dlog_pollard(uint64_t a, uint64_t b, uint64_t mod, uint64_t sz){
    int64_t x = 1, pa = 0, pb = 0;
    int64_t x2 = 1, pa2 = 0, pb2 = 0;

    auto next = [&a, &b, &mod, &sz](int64_t& x, int64_t& pa, int64_t& pb) {
        switch (x % 3)
        {
        case 0:
            pa = pa * 2 % sz;
            pb = pb * 2 % sz;
            x = x * x % mod;
            break;

        case 1:
            pb = (pb + 1) % sz;
            x = x * b % mod;
            break;
        
        default:
            pa = (pa + 1) % sz;
            x = x * a % mod;
            break;
        }
    };

    while (true){
        next(x, pa, pb);
        next(x2, pa2, pb2);
        next(x2, pa2, pb2);

        cout << x << " " << pa << " " << pb << "\t<--->\t";
        cout << x2 << " " << pa2 << " " << pb2 << endl;

        if (x == x2){

            x = inverseByModGCD((sz + pb - pb2) % sz, sz);
            if ((sz + pb - pb2) % sz * x % sz == 1)
                return (sz + pa2 - pa) % sz * x % sz;
            return 0;
        }
    }
    
    return 0;
}
