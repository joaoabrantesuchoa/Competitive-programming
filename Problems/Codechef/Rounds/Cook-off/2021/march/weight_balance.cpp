#include <bits/stdc++.h>

using namespace std;

int  piso, teto,w1,w2,x1,x2,M, t;

int main() {
	cin >> t;
	while(t--) {
		cin >> w1 >> w2 >> x1 >> x2 >> M;

		piso = x1 * M;
		teto = x2 * M;

		if (w2 >= w1 + piso && w2 <= w1 + teto) {
			cout << 1 << "\n";
		} else {
			cout << 0 << "\n";
		}
	}
	return 0;
}