#include <bits/stdc++.h>

using namespace std;

#define mod 1000000009

long long a,b;

long long binpow_recursion(long long base, long long exponent) {
        if (exponent == 0) {
                return 1;
        }
        long long ans = binpow_recursion(base, exponent / 2);
        if (b % 2) {
                return ans * ans * base;
        } else {
                return ans * ans;
        }
}

long long binpow_interative(long long base, long long exponent) {
        long long ans = 1;
        while(exponent > 0) {
                cout << ans << " " << base << " " << exponent << "\n";
                if (b & 1) {
                        ans = ans * base;
                }
                base = base * base;
                exponent >>= 1;
        }
        return ans;
}

long long binpow_interative_module(long long base, long long exponent) {
        base %= mod;
        long long ans = 1;
        while(exponent > 0) {
                if (b & 1) {
                        ans = ans * base % mod;
                }
                base = base * base % mod;
                exponent >>= 1;
        }
        return ans;
}

int main() {
        cin >> a >> b;
        cout << binpow_recursion(a,b) << "\n";
        cout << binpow_interative(a,b) << "\n";
        cout << binpow_interative_module(a,b) << "\n";
}
