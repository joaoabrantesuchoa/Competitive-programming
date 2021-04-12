#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int qtd_digits(int number) {
	int digits = 1;

	while(number / 10 != 0) {
		number /= 10;
		digits++;
	}
	return digits;
}

int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	} else {
		gcd(b, a % b);
	}
}

int main() {
	cin >> t;

	while(t--) {
		cin >> a  >> b >> c;
		int n1 = pow(10,a - 1);
		int n2 = pow(10,b - 1);

		while(qtd_digits(gcd(n1,n2)) != c) {
			n1++;
		}
		cout << n1 << " " << n2 << "\n";
	}
}
