#include <bits/stdc++.h>

using namespace std;

char graph[105][105];
int n,m,s;
string instructions;

int mv_l[4] = {-1,0,1,0};
int mv_c[4] = {0,1,0,-1};
int direction, tickets = 0;

bool can(int i, int j) {
	return (i >= 0 && i <= n - 1 && j >= 0 && j <= m - 1 && graph[i][j] != '#');
}

int main() {
	while(true) {
		tickets = 0;
		int li, ci;
		cin >> n >> m >> s;

		if (n == 0 && m == 0 && s == 0) {
			break;
		}
	
		for (int i = 0; i < n; i++) {
			cin >> instructions;
			for (int j = 0; j < m; j++) {
				graph[i][j] = instructions[j];
				if (graph[i][j] == 'N' || graph[i][j] == 'S' || graph[i][j] == 'L' || graph[i][j] == 'O') {
					li = i;
					ci = j;
				}
	
				if (graph[i][j] == 'N') {
					direction = 0;
				} else if (graph[i][j] == 'S') {
					direction = 2;
				} else if (graph[i][j] == 'L') {
					direction = 1;
				} else if (graph[i][j] == 'O') {		
					direction = 3;
				}	
			}
		}

		cin >> instructions;

		for (int i = 0; i < s; i++) {
		//	cout << li << " " << ci << " " << direction << "\n";
			if (instructions[i] == 'D') {
				direction = (direction + 1) % 4;
				direction %= 4;
			} else if (instructions[i] == 'E') {
				direction = (direction - 1) % 4;
				if (direction < 0) {
					direction = 3;
				}
			} else if (instructions[i] == 'F') {
				if (can(li + mv_l[direction], ci + mv_c[direction])) {
					li += mv_l[direction];
					ci += mv_c[direction];
				}
			}
			if (graph[li][ci] == '*') {
				tickets++;
				graph[li][ci] = '.';
			}
		}

		cout << tickets << "\n";

	}
	return 0;
}
