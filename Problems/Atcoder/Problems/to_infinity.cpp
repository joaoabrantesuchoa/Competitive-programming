#include <bits/stdc++.h>

using namespace std;

string s;
long long k;

int main() {

	cin >> s >> k;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1' && i == k - 1) {
			cout << 1 << "\n";
			break;

		}


		if (s[i] != '1') {
			cout << s[i] <<  "\n";
			break;
		}
	}

	return 0;
}
