#include <bits/stdc++.h>

using namespace std;

int t,l;
string s;
bool heaven;
int good, bad;

int main() {

    cin >> t;

    while(t--) {
        cin >> l >> s;
        heaven = false;
        good = 0;
        bad = 0;
        for (int i = 0; i < l; i++) {
            if (s[i] == '0') {
                bad++;
            } else {
                good++;
            }
            if (good >= float(i + 1) / 2) {
                heaven = true;
                break;
            }
        }
        if (heaven) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}