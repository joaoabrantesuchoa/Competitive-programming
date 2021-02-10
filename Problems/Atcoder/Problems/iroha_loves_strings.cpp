#include <bits/stdc++.h>

using namespace std;

int n, l;
string s;
string resp;
vector<string> palavras;

int main() {
	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		cin >> s;
		palavras.push_back(s);
	}

	sort(palavras.begin(), palavras.end());

	for(auto x: palavras) {
		cout << x;
	}

	cout << "\n";


	return 0;
}
