#include <bits/stdc++.h>

using namespace std;

/*GCD(a,b) is the biggest common divisors between a and b. if GCD(a,b) == 1, then a and b are relative primes.
LCM(a,b) is the smallest multiple of a and b.
We can calculate the GCD(a,b) in O(log n) with the Euclid algorithm. It says:
For a and b with a >= b.
if b divides a, then the GCD is B.
else the GCD(a,b) is equal to GCD(b, a % b). Repeat until b divide a.

Equations useful:
LCM(a,b) = (a * b) / GCD(a,b).
a * b = LCM(a,b) * GCD(a,b).
*/

long long a,b;

long long euclid(long long a, long long b) {
	if (a % b == 0) {
		return b;
	} else {
		euclid(b, a % b);
	}
}

long long LCM(long long a,long long b) {
	return (a * b) / euclid(a,b);	
}



int main() {
	cin >> a >> b;
	cout << euclid(a,b) << "\n";
	cout << LCM(a,b) << "\n";

	return 0;
}
