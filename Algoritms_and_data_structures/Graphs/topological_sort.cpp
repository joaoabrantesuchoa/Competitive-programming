#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

vvi adj_list(1000);
vi topological;
int V,E,x,y;
bool visited[1000] = {false};

void dfs(int node) {
    visited[node] = true;
    for (int i = 0; i < (int)adj_list[node].size(); i++) {
        int adj = adj_list[node][i];
        if (visited[adj] == false) {
            dfs(adj);
        }
    }
    topological.push_back(node);
}

int main() {
    while(true) {
        cin >> V >> E;
        if (V == 0 && E == 0) break;
        topological.clear();
        memset(visited, false, sizeof(visited));

        for (int i = 0; i < E; i++) {
            cin >> x >> y;
            adj_list[x].push_back(y);
        }

        for (int i = 0; i < V; i++) {
            if (visited[i] == false) {
                dfs(i);
            }
        }
        reverse(topological.begin(), topological.end());

        for (int i = 0; i < V; i++) {
            cout << topological[i] << " ";
        }
    }
    return 0;
}