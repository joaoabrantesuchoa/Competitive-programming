#include <bits/stdc++.h>

using namespace std;

string s,sub;
int t;
int letter = 0;

int main() {
	cin >> t;
	while(t--) {
		cin >> s;

		if (s.size() < 5) {
			cout << s << "\n";
		} else {
			for (int i = 0; i < s.size(); i++) {
				if (i + 5 <= s.size()) {
					for (int j = 0; j < 5; j++) {
						sub += s[i + j];
					}
					if (sub == "party") {
						cout << "pawri";
						i += 4;
						sub.clear();
					} else {
						cout << s[i];
						sub.clear();
					}
				} else {
					cout << s[i];
				}
			}
			cout << sub << "\n";
		}

	}
	return 0;
}