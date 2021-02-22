#include <bits/stdc++.h>

using namespace std;

int arr[10009];
int n;
int qtd;

int divide(int x) {
	if (x % 2 == 0) return 1 + divide(x / 2);
	else return 0;
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		qtd += divide(arr[i]);
	}

	cout << qtd << "\n";

	

	
	return 0;
}
