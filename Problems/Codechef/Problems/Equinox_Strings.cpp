#include <bits/stdc++.h>

using namespace std;

int A,B,N,T;
long Sar, Anu;
string S;

int main() {

    cin >> T;

    while(T--) {
        cin >> N >> A >> B;
        Sar = 0;
        Anu = 0;
        for (int i = 0; i < N; i++) {
            cin >> S;
            char first = S[0];

            if (first == 'E' || first == 'Q' || first == 'U' || first == 'I' || first == 'N' || first == 'O' || first == 'X') {
                Sar += A;
            } else {
                Anu += B;
            }

        }
        if (Sar > Anu) {
            cout << "SARTHAK" << "\n";
        } else if (Sar < Anu) {
            cout << "ANURADHA" << "\n";
        } else if (Sar == Anu) {
            cout << "DRAW" << "\n";
        }

    }

    return 0;
}