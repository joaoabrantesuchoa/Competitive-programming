#include <bits/stdc++.h>

using namespace std;

/*
Given an integer N, find the longest subsequence
of [1,2..., n -1] whose product is 1 modulo n.

We need to get a product coprime with n, because the modulo need to be one.So all the numbers of the array should
be coprimes with n.
1) Find all integers < N and coprimes with N.
2) multiply one for one and verify the product. If the product modulo N is one, add, discard otherwise.
*/

bool coprimes[1000009];
int n;
long long product = 1;

long long GCD(long long A, long long B) {
    if (A % B == 0) {
        return B;
    }
    GCD(B, A % B);
}

int main() {
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (GCD(n,i) == 1) {
            coprimes[i] = true;
            product = (product*i) % n;
        }
    }

    if (product != 1) {
        coprimes[product] = 0;
    }

    cout << count(coprimes + 1, coprimes + n, true) << "\n";

    for (int i = 1; i < n; i++) {
        if (coprimes[i]) {
            cout << i << " ";
        }
    }
    return 0;
}