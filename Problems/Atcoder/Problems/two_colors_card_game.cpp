#include <bits/stdc++.h>

using namespace std;

int n,
    m,
    ans;
string s;
map<string, int> word_quantity;

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		word_quantity[s]++;
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> s;
		word_quantity[s]--;
		word_quantity[s] = max(0, word_quantity[s]);
	}

	for (auto word : word_quantity) {
		ans = max(ans, word.second);
	}

	cout << ans << "\n";

	return 0;
}
