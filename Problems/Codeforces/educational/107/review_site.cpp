#include <bits/stdc++.h>

using namespace std;

int t,n;

int main() {

	cin >> t;

	while(t--) {
		cin >> n;
		int serverA[2] = {0,0};
		int serverB[2] = {0,0};
		int R;
		for (int i = 0; i < n; i++) {
			cin >> R;
			
			if (R == 1) {
				if (serverA[0] < serverA[1] && serverA[0] + 1 >= serverA[1]) {
					serverA[0]++;
				} else if (serverB[0] < serverB[1] && serverB[0] + 1 >= serverB[1]) {
					serverB[0]++;
				} else {
					serverA[0]++;
				}
			} else if (R == 2) {
				if (serverA[0] >= serverA[1] && serverA[1] + 1 > serverA[0]) {
					serverB[1]++;
				} else if (serverB[0] >= serverB[1] && serverB[1] + 1 > serverB[0]) {
					serverA[1]++;
				} else {
					serverA[1]++;
				}

			} else if (R == 3) {
				if (serverA[0] >= serverA[1]) {
					serverA[0]++;
				} else if (serverB[0] >= serverB[1]) {
					serverB[0]++;
				} else {
					serverA[0]++;
				}
			}
		}
		cout << serverA[0] + serverB[0] << "\n";

	}


	return 0;
}
