#include <bits/stdc++.h> 

using namespace std;

int n,d;
long long number;

int main() {

	cin >> d >> n;

	if (d == 0) {
		if (n == 100) cout << 101 << "\n";
		else cout << n + d << "\n";
	}

	if (d == 1) {
		if (n == 100) cout << 10100 << "\n";
		else cout << 100 * n << "\n";
	} 

	if (d == 2) {
		if (n == 100) cout << 1010000 << "\n";
		else cout << 10000 * n << "\n";
	}

	return 0;
}
