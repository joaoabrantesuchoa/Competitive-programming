#include <bits/stdc++.h>

using namespace std;

int t,n,grid[9][9];

//Test all permutations of columns e print the smallest

int main() {

	cin >> t;

	while(t--) {
		cin >> n;
		int ans = 1000000000;
		int column[8] = {0, 1, 2, 3, 4, 5, 6, 7};
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> grid[i][j];
			}
		}

		do {
			int sum = 0;
			for (int i = 0; i < n; i++) {
				sum += grid[i][column[i]];
			}
			ans = min(sum, ans);
		} while(next_permutation(column, column + n));

		cout << ans << "\n";
	}
	return 0;
}