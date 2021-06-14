#include <bits/stdc++.h>

using namespace std;

//Two queens cannot share the same column or the same row, so 
//we only need to find a valid permutation of 8! row positions.
//We should verify too if the queens cannot attach each other by the 
//diagonals.

int row[8], t, a, b, lineCounter;

bool place(int r, int c) {
	for (int prev = 0; prev < c; prev++) { //Check previous queens
		if (row[prev] == r || (abs(row[prev] - r) == abs(prev- c))) { //Same row or same diagonal.
			return false;
		}
	}
	return true;
}

void backtrack(int c) { //Test by the columns
	if (c == 8 && row[b] == a) { //If a put all the 8 queens
		printf("%2d      %d", ++lineCounter, row[0] + 1);
		for (int j = 1; j < 8; j++) cout << " " << row[j] + 1;
		cout << "\n";
	}
	for (int r = 0; r < 8; r++) { //Check if i can put a queen in each row 
		if(place(r, c)) { //If a can put one queen in (r,c) i put and go to the next column
			row[c] = r;
			backtrack(c + 1);
		}
	}
}

int main() {
	cin >> t;

	while(t--) {
		cin >> a >> b;
		a--;
		b--;
		memset(row, 0, sizeof(row));
		lineCounter = 0;

		cout << "SOLN       COLUMN\n";
		cout << " #      1 2 3 4 5 6 7 8\n\n";
		backtrack(0);
		if (t) cout << "\n";
	}
	cout << "\n";
	return 0;
}