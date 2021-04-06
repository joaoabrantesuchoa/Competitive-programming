#include <bits/stdc++.h>

using namespace std;

/*Create an array capable to tell if the number is prime or not for 2... N.
 * Can be used too for creating an array that stores the smallest prime factor of each number.
 * O(n log n).
*/
int n, sieve[100000];
void eratosthenes(int n) {
	for (int x = 2; x <= n; x++) {
		if (sieve[x]) continue; //If the number is composite, i don't need to verify their multiples, because their have already been verified.
		for (int u = 2 * x; u <= n; u += x) { //One means if a number is multiple of other, ie. composite.
			sieve[u] = 1;
		}
	}
}

int main() {
	cin >> n;


	eratosthenes(n);

	for (int i = 2; i <= 20; i++) {
		cout << sieve[i] << " ";
	}
	cout << "\n";

	return 0;
}
