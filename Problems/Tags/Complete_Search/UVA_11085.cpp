#include <bits/stdc++.h>

using namespace std;

int queen_column[8]; 
int correct_line[8];

bool valid_position(int line, int column) {
	for (int row = 0; row < line; row++) {
		if (column == correct_line[row]) return false; //Row I take before
		if (abs(line - row) == abs(column - correct_line[row])) return false; //Diagonal collision
	}
	return true;
}

int backtracking(int state) {
	if (state == 8) return 0;
	int movements = 1000000;

	for (int i = 0; i < 8; i++) {
		if (valid_position(state, i)) {
			correct_line[state] = i;
			movements = min(movements, i == queen_column[state]? backtracking(state + 1) : 1 + backtracking(state + 1));
		}
	}
	return movements;
}

int main() {

	for (int t = 1;; t++) {
		for (int i = 0; i < 8; i++) {
			if (scanf("%d", &queen_column[i]) == -1) return 0;
			queen_column[i]--;
			correct_line[i] = queen_column[i];
		}
		cout << "Case " << t << ": " << backtracking(0) << "\n";
	}
	return 0;
}