#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

#define INF 1000000000

vector<ii> adjList[10000];
vi dist(1000, INF);
int edges, nodes, x,y,p;

void bellmanFord(int source) {
    dist[source] = 0;

    for (int i = 0; i < nodes - 1; i++) {
        for (int u = 0; u < nodes; u++) {
            for (int j = 0; j < (int)adjList[u].size(); j++) {
                ii adjacenyNode = adjList[u][j];
                dist[adjacenyNode.first] = min(dist[adjacenyNode.first], dist[u] + adjacenyNode.second);
            }
        }
    }
}

bool negativeCycleCheck() {
    bool negativeCycle = false;
    for (int u = 0; u < nodes; u++) {
        for (int j = 0; j < (int)adjList[u].size(); j++) {
            ii adjacenyNode = adjList[u][j];
            if (dist[adjacenyNode.first] > dist[u] + adjacenyNode.second) {
                negativeCycle = true;
                return negativeCycle;
            }
        }
    }
    return negativeCycle;
}

int main() {

    cin >> nodes >> edges;

    for (int i = 0; i < nodes; i++) {
        cin >> x >> y >> p;
        adjList[x].push_back({y,p});
    }

    bellmanFord(0);
    cout << negativeCycleCheck << "\n";

    return 0;
}