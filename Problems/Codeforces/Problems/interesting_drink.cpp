#include <bits/stdc++.h>

using namespace std;

int qtd_shops[100009], prices[100009];
int n,q,m;
int biggest_price;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> prices[i];
		biggest_price = max(prices[i], biggest_price);
	}

	sort(prices, prices + n);
	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> m;
		cout << upper_bound(prices, prices + n, m) - prices << "\n";
	}
	

	return 0;
}
