#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvi;

#define INF 100000000

int edges;
int x,y,w;
vi dist(100, INF);
vector<vi> adj_list(1000);
queue<int> Queue;

void BFS(int node) {
    dist[node] = 0;
    Queue.push(node);

    while(!Queue.empty()) {
        int actual = Queue.front();
        Queue.pop();
        for (int i  = 0; i < (int)adj_list[actual].size(); i++) {
            int node_neighbor = adj_list[actual][i];
            if (dist[node_neighbor] == INF) {
                dist[node_neighbor] = dist[actual] + 1;
                Queue.push(node_neighbor);
            }

        }

    }


}


int main() {
    cin >> edges;

    for (int i = 0; i < edges; i++) {
        cin >> x >> y;
        adj_list[x].push_back(y);
    }

    BFS(1);

    cout << dist[4] << "\n";

    return 0;
}