#include <bits/stdc++.h>

using namespace std;

//If we imagine a tree with the possible numbers, we will find 
//if N is in the tree, therefore N % b = m % b, because N
//can be obtained by sum b many times since they are congruent.
//m < n and is in the set.

//So if the actual number is not congruent to N, it does not 
//matter how many times we sum B, we not gonna get N.
//In this case we should multiply for an until we find the same congruency.

long long t,n,a,b,m;
bool exist;

int main() {
	cin >> t;

	while(t--) {
		cin >> n >> a >> b;

		if (a == 1) {
			if ((n - 1) % b == 0) {
				cout << "Yes" << "\n";
			} else {
				cout << "No" << "\n";
			}
		} else {
			m = 1;
			exist = false;
			for (m = 1; m <= n; m *= a) {
				if (m % b == n % b || (n - m) % b == 0) {
					exist = true;
					break;
				}
			}
			if (exist) {
				cout << "Yes" << "\n";
			} else {
				cout << "No" << "\n";
			}
		}
	}
	return 0;
}