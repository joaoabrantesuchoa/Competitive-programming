#include <bits/stdc++.h>

using namespace std;

int n,q;
int x;
long long soma, element;
#define MOD 1000000007

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> element;
        soma = ((soma + element) % MOD + MOD) % MOD;
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> x;
    }

    for (int i = 0; i < q; i++) {
        soma = ((soma + soma) % MOD + MOD) % MOD;
        cout << soma << "\n";      
    }
    return 0;
}