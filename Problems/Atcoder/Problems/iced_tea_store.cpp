#include <bits/stdc++.h>

using namespace std;

long long q,h,s,d,n;

int main() {

	cin >> q >> h >> s >> d >> n;

	q *= 4;
	h *= 2;

	long long mid = min({q,h,s});

	long long Ans = (n / 2) * min(mid * 2, d) + (n % 2) * mid;

	cout << Ans << "\n";

	return 0;
}
