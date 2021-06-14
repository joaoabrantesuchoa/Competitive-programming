#include <bits/stdc++.h>

using namespace std;

long long a,b,c;

int main() {

	cin >> a >> b >> c;

	if (c % 2 == 0) {
		a = abs(a);
		b = abs(b);
	}
	if (a < b) {
		cout << "<\n";
	} else if (a > b) {
		cout << ">\n";
	} else {
		cout << "=\n";
	}

	return 0;
}