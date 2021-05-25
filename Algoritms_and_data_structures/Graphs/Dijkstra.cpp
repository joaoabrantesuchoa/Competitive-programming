#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;

#define INF 1000000000
int nodes, edges, x, y , p;
vector<ii> adjList[100009];
vector<int> parents(100009, - 1);
vi dist(100009, INF);
priority_queue<ii, vector<ii>, greater<ii> > pq;

void dijkstra(int source) {
    dist[source] = 0;
    pq.push({0, source});
    while(!pq.empty()) {
        int distance = pq.top().first, actual = pq.top().second;
        pq.pop();
        if (actual == nodes) break;
        else {
            if (distance <= dist[actual]) {
                for (auto next: adjList[actual]) {
                    int nextWeight = next.first;
                    int nextNumber = next.second;    
                    if (dist[actual] + nextWeight < dist[nextNumber]) {
                        dist[nextNumber] = dist[actual] + nextWeight;
                        parents[nextNumber] = actual;
                        pq.push({dist[nextNumber], nextNumber});
                    }
                }
            } 
        }
    }
}

void restore_path(int source) {
    vector<int> path;

    for (int node = nodes; node != source; node = parents[node]) {
        path.push_back(node);
    }
    path.push_back(source);
    reverse(path.begin(), path.end());
    for (auto node: path) {
        cout << node << " ";
    }
    cout << "\n";
}

int main() {

    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++) {
        cin >> x >> y >> p;
        adjList[x].push_back({p, y});
        adjList[y].push_back({p, x});
    }
    dijkstra(1);
    return 0;
}