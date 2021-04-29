#include <bits/stdc++.h>

using namespace std;

int t,r,b,d;

void ajust() {
            int x = 1;
            int y = d + 1;
            int mult = (abs(r - b)) / (d + 1);
            
            x *= mult;
            y *= mult;

            if (r >= b) {
                r -= y;
                b -= x;
            } else {
                r -= x;
                b -= y;
            }
}

int main() {
    cin >> t;

    while(t--) {
        cin >> r >> b >> d;

        while (abs(r - b) > d && d != 0) {
            ajust();
        }   
            if (r > 0 && b > 0 && abs(r - b) <= d) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
    }
    return 0;
}