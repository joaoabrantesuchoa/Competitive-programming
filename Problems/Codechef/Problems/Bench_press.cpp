#include <bits/stdc++.h>

using namespace std;

int t,n,w, wr;
long long weight;
long long weights[100009];
long long L,R;
bool can;

int main() {

    cin >> t;

    while(t--) {
        cin >> n >> w >> wr;
        can = false;
        L = 0;
        R = 0;
        memset(weights, 0, sizeof(weights));
        if (wr > w) {
            can = true;
        }
        for (int i = 0; i < n; i++) {
            cin >> weight;
            weights[weight]++;
        }
        for (int i = 1; i <= 100000; i++) {
            if (weights[i] != 0) {
                L += (weights[i] / 2) * i;
                R += (weights[i] / 2) * i;
            } 
        }
        if (L + R + wr >= w) {
            can = true;
        }
        if (can) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

    }

    return 0;
}