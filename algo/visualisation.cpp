#include "visualisation.hpp"

void show_bytes(const string& bytes, bool bits = true, const string spliter = " ", const string& end = "\n"){
    if (bits)
        for (char i : bytes)
            cout << bitset<8>(i) << spliter;
    else
        for (char i : bytes)
            cout << +(uint8_t)i << spliter;
    cout << end;
}