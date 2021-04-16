#include <bits/stdc++.h>

using namespace std;

int t,n;
char arr[300009];

int main() {

	cin >> t;

	while(t--) {
		cin >> n;

		int qtd_t = 0;
		int qtd_m = 0;
		bool possible = true;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];

			if (arr[i] == 'T') {
				qtd_t++;
			} else {
				qtd_m++;
				if (qtd_m > qtd_t) {
					possible = false;
				}
			}
		}

		qtd_t = 0;
		qtd_m = 0;

		for (int i = n - 1; i >= 0; i--) {
			if (arr[i] == 'T') {
				qtd_t++;
			} else {
				qtd_m++;
				if (qtd_m > qtd_t) {
					possible = false;
				}
			}
		}

		if (qtd_t != qtd_m * 2) {
			possible = false;
		}

		if (possible) {
			cout << "YES" << "\n";
		} else {
			cout << "NO" << "\n";
		}

	}

	return 0;
}