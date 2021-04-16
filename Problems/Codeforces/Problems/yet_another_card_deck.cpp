#include <bits/stdc++.h>

using namespace std;

/*Read the input the store the positions of the first Ci color who appear.
 * Process the queues and return the position of the I-th color. 
 * All the colors with positions smaller than I-th are increased by one.
 * All the colors with positions bigger than I-th are the same.
 * The position of the I-th color is now one.*/

int n,q,t;
int positions_colors[51], arr[300009];

int main() {
	cin >> n >> q;

	memset(positions_colors, 0, sizeof(positions_colors));

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		if (positions_colors[arr[i]] == 0) {
			positions_colors[arr[i]] = i;
		}
	}
	for (int i = 0; i < q; i++) {
		cin >> t;

		cout << positions_colors[t] << " ";

		for (int j = 1; j <= 50; j++) {
			if (positions_colors[j] != 0) {
				if (positions_colors[j] < positions_colors[t]) {
					positions_colors[j]++;
				}
			}
		}
		positions_colors[t] = 1;
	}


	return 0;
}
