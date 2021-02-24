#include <bits/stdc++.h>

using namespace std;

#define maxn 100009

int n;
long long monsters[maxn], heros[maxn];
long long ans = 0;


int main() {

	cin >> n;

	for (int i = 0; i <= n; i++) cin >> monsters[i];

	for (int i = 0; i < n; i++) cin >> heros[i];
	
	for (int i = 0; i < n; i++)  {
		long long  intermediate = min(monsters[i], heros[i]);

		heros[i] -= intermediate;
		ans += intermediate;
		
		intermediate = min(monsters[i + 1], heros[i]);

		monsters[i + 1] -= intermediate;
		ans += intermediate;
	}

	cout << ans << "\n";


	return 0;
}
