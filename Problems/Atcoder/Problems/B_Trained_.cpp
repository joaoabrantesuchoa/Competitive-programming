#include <bits/stdc++.h>

using namespace std;

int n;
bool can = false;
int actual;
int buttons[100009];

int main() {
	cin >> n;
	actual = 1;
	int steps = 1;

	for (int i = 1; i <= n; i++) {
		cin >> buttons[i];
	}

	for (int i = 0; i < 100009; i++) {
		if(actual == 1) {
			actual = buttons[1];
		} else {
			actual = buttons[actual];
		}
		if (actual == 2) {
			can = true;
			break;
		}
		steps++;
	}
	if (can) {
		cout << steps << "\n";
	} else {
		cout << -1 << "\n";
	}

	return 0;
}