#ifndef VISUALISATION
#define VISUALISATION

#include<bitset>
#include<vector>
#include<map>
#include<iostream>

using namespace std;

void show_bytes(const string& bytes, bool bits = true, const string spliter = " ", const string& end = "\n");

template<size_t t>
void show_bits(const bitset<t>& bx, const string& end = "\n") {
  cout << bx << end;
}

template <typename T>
void show(const T& t, const string& end = "") {
    cout << t << end;
}

template <typename T>
void show(const pair<T, T>& p, const string& spliter = " : ", const string& end = "") {
  cout << p.first << spliter << p.second << end;
}

template <typename T1, typename T2>
void show(const map<T1, T2>& m, const string& spliter = " ", const string& end = "\n") {
  for (const pair<T1, T2>& i : m)
    cout << i.first << ":" << i.second << spliter;
  cout << end;
}

template <typename T>
void show(const vector<T>& v, const string& spliter = " ", const string& end = "\n") {
  for (const T& i : v){
    show(i);
        cout << spliter;
    }
  cout << end;
}

#endif