#include <bits/stdc++.h>

using namespace std;

long long sum = 0, n, arr[10000009];
long long minimum_money = 1000000000;
long long difference = 0;


int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	minimum_money = max(sum, minimum_money);

	for (int i = 0; i < n; i++) {
		difference += arr[i];
		minimum_money = min(minimum_money, abs(difference -(sum - difference)));
	}
	cout << minimum_money << "\n";
	return 0;
}
