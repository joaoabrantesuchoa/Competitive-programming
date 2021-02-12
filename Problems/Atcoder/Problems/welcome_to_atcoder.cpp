#include <bits/stdc++.h>

using namespace std;

#define maxn 100009

int n,m, p;
int penalities[maxn], AC[maxn];
string s;

int main() {

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> p >> s;

		if (AC[p] == 0) {
			if (s == "AC") {
				AC[p] = 1;
			} else {
				penalities[p]++;
			}
		}
	}

	int number_AC = 0;
	int number_WA = 0;

	for (int i = 1; i <= n; i++) {
		if (AC[i] == 1) {
			number_AC++;
			number_WA += penalities[i];
		}
	}

	cout << number_AC << " " << number_WA << "\n";
		   
		   
	return 0;
}


