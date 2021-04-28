#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;


int edges;
int x,y,w;
vi visited(100, 0);
vector<vii> adj_list(1005);

void dfs(int node) {
    visited[node] = 1;

    for (int i = 0; i < (int)adj_list[node].size(); i++) {
        ii neighbor = adj_list[node][i];
        if (!visited[neighbor.first]) {
            dfs(neighbor.first);
        }
    }

}

int main() {
    cin >> edges;

    for (int i = 0; i < edges; i++) {
        cin >> x >> y >> w;
        adj_list[x].push_back({y,w});
    }
    dfs(1);
    return 0;
}
