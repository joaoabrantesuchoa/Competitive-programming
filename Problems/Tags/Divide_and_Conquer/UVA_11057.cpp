#include <bits/stdc++.h>

using namespace std;

long n;
long prices[10009];
long target;

bool binary_search(int l, int r, int value) {
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if (prices[mid] == value) {
			return true;
		} else if (prices[mid] < value) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return false;
}

int main() {
	while(scanf("%d", &n) != EOF) {
		long price1, price2, difference = 1000000000;
		for (int i = 0; i < n; i++) {
			cin >> prices[i];
		}
		sort(prices, prices + n);
		cin >> target;
		for (int i = 0; i < n; i++) {
			if (binary_search(0, n - 1, target - prices[i])) {
				long price1_temp = prices[i];
				long price2_temp = target - prices[i];
				if (abs(price2_temp - price1_temp) < difference) {
					price1 = price1_temp;
					price2 = price2_temp;
					difference = abs(price2 - price1);
				}
			}
		}
		cout << "Peter should buy books whose prices are " << price1 << " and " << price2 << ".\n";
		cout << "\n";
	}
	return 0;
}