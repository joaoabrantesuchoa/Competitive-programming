#include <bits/stdc++.h>

using namespace std;

int dp[105][105];
int arr[105][105];
int n;

int main() {

	memset(dp, 0, sizeof(dp));

	cin >> n;

	for (int i = 1; i <= 2; i++) {
		for (int j  = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}

	dp[1][1] = arr[1][1];
	dp[2][1] = arr[1][1] + arr[2][1];

	for (int i = 1; i <= 2; i++) {
		for (int j = 1; j <= n; j++) {
			dp[i][j] = max(dp[i][j],max(dp[i-1][j], dp[i][j-1]) + arr[i][j]);
		}	
	}

	cout << dp[2][n] << "\n";
	
	return 0;
}
