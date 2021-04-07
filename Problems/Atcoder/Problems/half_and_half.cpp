#include <bits/stdc++.h>

using namespace std;

/* Explanation: Verify if is better buy 2 AB and divide in A and B or
 * buy individually*/

int a,b,c,x,y;
int price = 0;

int main() {
	cin >> a >> b >> c >> x >> y;

	if (c * 2 <= a + b) {
		price += min(x,y) * c * 2;
		int temp = min(x,y);
		x -= temp;
		y -= temp;
	}
	if (x != 0) {
	       if (a <= c * 2) {
	       		price += a * x;
	       } else {
			price += 2 * c * x;
	       }	
	}
	if (y != 0) {
		if (b <= c * 2) {
			price += b * y;
		} else {
			price += 2 * c * y;
		}
	}

	cout << price << "\n";
	return 0;
}
