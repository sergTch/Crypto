#include "factorization.hpp"
#include "math.h"

#include <iostream>
#include <stack>

uint64_t GCD(uint64_t x, uint64_t y)
{
	int64_t t;

	while (y != 0) {
		t = x % y;
		x = y;
		y = t;
	}

	return x;
}

int64_t LCM(int64_t m, int64_t n)
{
	return m * n / GCD(m, n);
}

uint64_t factor_ferma(uint64_t n){
    uint64_t x = sqrt(n), y;
    if (x * x == n)
        return x;

    x++;
    while (true){
        // std::cout << x << std::endl;
        y = sqrt(x * x - n);
        if (x * x - y * y == n){
            // std::cout << x << ' ' << y << std::endl;
            return x - y;
        }
        x++;
    }
}

uint64_t factor_pollard(uint64_t n){
    auto f = [&n](uint64_t x) -> uint64_t {
        return (x * x + 1) % n;
    };

    uint64_t a = 2, b = 2, t;

    while (true){
        a = f(a);
        b = f(f(b));
        t = a > b ? GCD(a - b, n) : GCD(b - a, n);
        
        //std::cout << a << " " << b << std::endl;

        if (t != 1)
            return t;
    }
}

map<int64_t, int64_t> getPrimes(int64_t n) {
	map<int64_t, int64_t> rez;

	for (int64_t i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			rez[i]++;
			n /= i;
		}
	}

	if (n != 1)
		rez[n]++;

	return rez;
}

int64_t eulerFunc(int64_t n, map<int64_t, int64_t>* primes)
{
	int64_t k = 1;

	for (auto i : primes ? (*primes) : getPrimes(n))
		k = k * (i.first - 1) * binPow(i.first, i.second - 1);

	return k;
}

int64_t inverseByMod(int64_t x, int64_t mod, map<int64_t, int64_t> *modPrimes)
{
	return binPow(x, eulerFunc(mod, modPrimes) - 1, mod);
}

int64_t inverseByPrimeMod(int64_t x, int64_t mod)
{
	return binPow(x, mod - 2, mod);
}

int64_t inverseByModGCD(int64_t x, int64_t mod)
{
	stack<int64_t> st;
	int64_t t, k, a, b;
	a = mod;
	b = x;

	while (true) {
		t = a % b;
		if (t == 0)
			break;

		st.push(a / b);
		a = b;
		b = t;
	}

	t = 0;
	k = 1;

	while (a != mod) {
		x = a;
		a = st.top() * a + b;
		b = x;

		x = k;
		k = t - st.top() * k;
		t = x;

		st.pop();
	}

	k %= mod;

	if (k < 0)
		k += mod;
	return k;
}

uint64_t binPow(uint64_t a, uint64_t b) {
	uint64_t rez = 1;

	while (b > 0) {
		if (b % 2)
			rez *= a;
		a *= a;
		b /= 2;
	}

	return rez;
}

uint64_t binPow(uint64_t a, uint64_t b, uint64_t mod) {
	uint64_t rez = 1;

	while (b > 0) {
		if (b % 2)
			rez = rez * a % mod;
		a = a * a % mod;
		b /= 2;
	}

	return rez % mod;
}
