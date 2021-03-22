#include <bits/stdc++.h>

using namespace std;

int n;


int main() {

	cin >> n;
	vector<int> x(n), y(n);
	vector<int> points(n);
	double lenght = 0;

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		points[i] = i;
	}

	do {
		for (int i = 0; i < n - 1; i++) {
			double t1 = pow(x[points[i]] - x[points[i + 1]], 2);
			double t2 = pow(y[points[i]] - y[points[i + 1]], 2);
			lenght += sqrt(t1 + t2);
		}


	} while(next_permutation(points.begin(), points.end()));

	int qtd_paths = 1;

	for (int i = 2; i <= n; i++) {
		qtd_paths *= i;
	}

	cout << fixed << setprecision(10) << lenght / qtd_paths << "\n";


	return 0;
}
