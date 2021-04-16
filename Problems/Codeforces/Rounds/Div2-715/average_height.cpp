#include <bits/stdc++.h>

using namespace std;

int t,n;
int arr[2500];

int main() {
	cin >> t;

	while(t--) {
		cin >> n;
		vector<int> even;
		vector<int> odd;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] % 2 == 0) {
				even.push_back(arr[i]);
			} else {
				odd.push_back(arr[i]);
			}
		}

		for (auto x: even) {
			cout << x << " ";
		}

		for (auto x: odd) {
			cout << x << " ";
		}
		cout << "\n";
	}

	return 0;
}
