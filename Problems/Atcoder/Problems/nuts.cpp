#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1009];
int ans = 0;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > 10) {
			ans += (arr[i] - 10);
		}
	}
	cout << ans << "\n";

	return 0;
}