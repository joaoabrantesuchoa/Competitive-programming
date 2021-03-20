#include <bits/stdc++.h>

using namespace std;

long long l,k;
int importance = 0;

bool solve(long long k, long long l) {
	long long copy = k;
	while(k <= l) {
		if (k == l) {
			return true;
		}
		k *= copy;
		importance++;
	}
	return false;
}

int main() {

	cin >> k >> l;

	if (solve(k,l)) {
		cout << "YES" << "\n" << importance << "\n";
	} else {
		cout << "NO" << "\n";
	}

	return 0;
}
