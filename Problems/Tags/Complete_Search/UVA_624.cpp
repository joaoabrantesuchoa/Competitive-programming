#include <bits/stdc++.h>

using namespace std;

int N, Q;
int track[21];

//find the subset whose sum is more closest to Q.

int main() {

	while(cin >> N) {
		cin >> Q;

		int ans_sum = -1000;
		vector<int> ans_numbers;

		for (int i = 0; i < Q; i++) {
			cin >> track[i];
		}

		for (int i = 0; i < (1 << Q); i++) {
			int sum = 0;
			vector<int> numbers;
			for (int j = 0; j < Q; j++) {
				if (i & (1 << j)) {
					sum += track[j];
					numbers.push_back(track[j]);
				}
			}
			if (sum <= N) {
				if (max(sum, ans_sum) == sum) {
					ans_sum = sum;
					ans_numbers = numbers;
				}
			}
		}
		for (int i = 0; i < ans_numbers.size(); i++) {
			cout << ans_numbers[i] << " ";
		}
		cout << "sum:" << ans_sum << "\n";




	}

	return 0;
}