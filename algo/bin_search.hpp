#ifndef BIN_SEARCH
#define BIN_SEARCH

#include <stdint.h>

template<typename T>
int64_t bin_search(int64_t l, int64_t r, T f){
    int64_t x;
    
    while (r - l > 1){
        x = (l + r) / 2;
        if (f(x))
            l = x;
        else r = x;
    }

    return l;
}


#endif