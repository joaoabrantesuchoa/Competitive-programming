#include <bits/stdc++.h>

using namespace std;

int qtd_cars = 0;
int n = 0, number;
int G1,G2,G3,G4;
int sum = 0;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> number;
		if (number == 4) {
			G4++;
		} else if (number == 3) {
			G3++;
		} else if (number == 2) {
			G2++;
		} else if (number == 1) {
			G1++;
		}
	}
	qtd_cars += min(G3,G1);
	int temp = min(G3,G1);
	G3 -= temp;
	G1 -= temp;

	qtd_cars += G2 / 2;
	G2 %= 2;

	if (G1 != 0) {
		int temp = 0;

		if (G2 != 0) temp += 2;

		temp += G1;

		qtd_cars += temp / 4;

		temp %= 4;

		if (temp) qtd_cars++;

	} else if (G3 != 0) {
		if (G2) qtd_cars++;
		qtd_cars += G3;
	} else if (G2 != 0) {
		qtd_cars++;
	}

	qtd_cars += G4;
	cout << qtd_cars << "\n";

	return 0;
}
