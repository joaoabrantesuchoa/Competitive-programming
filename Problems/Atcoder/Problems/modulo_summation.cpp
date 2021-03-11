#include <bits/stdc++.h>

using namespace std;

int n, ans = 0;
int arr[3500];


int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		ans += arr[i] - 1;
	}

	cout << ans << "\n";


	return 0;
}
