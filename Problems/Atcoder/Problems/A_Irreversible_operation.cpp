#include <bits/stdc++.h>

using namespace std;

int last_b = -1;
long long operations = 0;
string s;

int main() {
	cin >> s;
	last_b = s.length() - 1;
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == 'B') {
			operations += (last_b - i);
			last_b--;
		}
	}
	cout << operations << "\n";

	return 0;
}