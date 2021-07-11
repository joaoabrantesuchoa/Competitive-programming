#include <bits/stdc++.h>

using namespace std;

int a,b,n;
int qtd_retirada;
int perdedor = 0;

int euclid(int x, int y) {
	if(y == 0) return x;
	if (x % y == 0) {
		return y;
	}
	return euclid(y, x % y);
}

int main() {
	cin >> a >> b >> n;

	while(n >= 0) {
		if(perdedor == 0) {
			qtd_retirada = euclid(a,n);
		} else {
			qtd_retirada = euclid(b,n);
		}
		n -= qtd_retirada;
		perdedor = (perdedor + 1) % 2;
	}
	cout << perdedor << "\n";
	return 0;
}