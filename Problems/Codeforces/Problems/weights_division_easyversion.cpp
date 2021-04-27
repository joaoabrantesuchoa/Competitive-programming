#include <bits/stdc++.h>

using namespace std;

//Summary: We have a weighted rooted tree and we have to 
//make a minimum number of movements to make the sum of weights
//of paths from the root to each leat at most S.
//The movement is to select an edge W and W := floor(W/2);

//1) Calcule the number of the leaves of each edge.
//2) Diff(i) gonna be the difference of the i-th edge when we 
//divide it by 2. diff(i) = Wi * LEAVESi - floor(Wi/2) * LEAVESi.
//3) Create an ordered set with pairs(diff(i), i) and take the 
//maximum diff(i) and divide by 2. the re-add the new value and
//do this until the sum became <= S.
//4) Print the number of divisions.

//The weight of each edge and the number of leaves of each edge.
vector<int> w, cnt;
vector<vector<pair<int, int>>> graph;
set<pair<long long, int>> movements;
int t,n,x,y,ans;
long long s, sum_of_paths;

long long diff(int i) {
	return w[i] * 1ll * cnt[i] - (w[i] / 2) * 1ll * cnt[i];
}

void dfs(int node, int parent = -1) {
	if (graph[node].size() == 1) {
		cnt[parent] = 1;
	}
	for (auto edge : graph[node]) {
		int next = edge.first;
		int id = edge.second;
		if (id == parent) continue;
		dfs(next, id);
		if (parent != -1) cnt[parent] += cnt[id];
	}
}

int main() {
	cin >> t;
	while(t--) {
		cin >> n >> s;
		ans = 0;
		sum_of_paths = 0;
		movements.clear();
		w = vector<int>(n - 1);
		cnt = vector<int>(n - 1);
		graph = vector<vector<pair<int, int>>>(n);
		for (int i = 0; i < n - 1; i++) {
			cin >> x >> y >> w[i];
			x--, y--;
			graph[x].push_back({y, i});
			graph[y].push_back({x, i});
		}
		dfs(0);
		for (int i = 0; i < n - 1; i++) {
			movements.insert({diff(i), i});
			sum_of_paths += w[i] * 1ll * cnt[i];
		}
		while(sum_of_paths > s) {
			int id = movements.rbegin() ->second;
			movements.erase(prev(movements.end()));
			sum_of_paths -= diff(id);
			w[id] /= 2;
			movements.insert({diff(id), id});
			ans++;
		}
		cout << ans << "\n";
	}
	return 0;
}
