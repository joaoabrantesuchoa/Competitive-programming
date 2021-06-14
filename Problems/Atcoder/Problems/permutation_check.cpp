#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1009];
int exist[1009];

bool is_permutation() {
	for (int i = 1; i <= n; i++) {
		if (exist[i] != 1) return false;
	}
	return true;
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		exist[arr[i]]++;
	}

	if (is_permutation()) cout << "Yes" << "\n";
	else cout << "No" << "\n";



	return 0;
}