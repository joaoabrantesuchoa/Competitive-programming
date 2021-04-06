#include <bits/stdc++.h>

using namespace std;


string s;
int qtd_1, qtd_0, total1 = 0, total2 = 0;

int main() {

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0') {
			qtd_0++;
		}
		if (s[i] == '1') {
			qtd_1++;
		}
	}

	cout << 2 * min(qtd_0, qtd_1) << "\n";

	return 0;
}
