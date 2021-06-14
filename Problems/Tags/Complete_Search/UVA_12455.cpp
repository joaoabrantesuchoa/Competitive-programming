#include <bits/stdc++.h>

using namespace std;

//Verify if exist a subset whose sum
//is equal to N.

int t,n,p;
int bars[21];
bool have;

int main() {

	cin >> t;

	while(t--) {
		cin >> n >> p;
		have = false;

		for (int i = 0; i < p; i++) {
			cin >> bars[i];
		}

		for (int i = 0; i < (1 << p); i++) {
			int sum = 0;
			for (int j = 0; j < p; j++) {
				if (i & (1 << j)) {
					sum += bars[j];
				}
			}
			if (sum == n) {
				have = true;
				break;
			}
		}
		if (have) {
			cout << "YES" << "\n";
		} else {
			cout << "NO" << "\n";
		}
	}
	return 0;
}