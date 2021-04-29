#include <bits/stdc++.h>

using namespace std;

int t,n,m,k;

int main() {

    cin >> t;

    while(t--) {
        cin >> n >> m >> k;
        int cost = (m - 1) + m * (n-1);

        if (k == cost) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}