#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

long long n;
long long power = 1;

int main() {

	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		power = (power * i) % MOD;
	}
	
	cout << power << "\n";

	return 0;
}
