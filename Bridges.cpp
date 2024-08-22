#include <iostream>
#include <vector>
#include <algorithm>
#define UNVISITED -1

using namespace std;

vector<vector<int>> adj; 
vector<int> disc, low, parent;
vector<bool> articulationPoint;
int timeCounter = 0;

void findArticulationPoints(int u) {
    int children = 0;
    disc[u] = low[u] = ++timeCounter;
    
    for (int v : adj[u]) {
        if (disc[v] == UNVISITED) { 
            children++;
            parent[v] = u;
            findArticulationPoints(v);
            low[u] = min(low[u], low[v]);
            if (parent[u] == -1 && children > 1)
                articulationPoint[u] = true;
            if (parent[u] != -1 && low[v] >= disc[u])
                articulationPoint[u] = true;
        } else if (v != parent[u]) { 
            low[u] = min(low[u], disc[v]);
        }
    }
}

void initializeGraph(int n) {
    adj.assign(n, vector<int>());
    disc.assign(n, UNVISITED);
    low.assign(n, 0);
    parent.assign(n, -1);
    articulationPoint.assign(n, false);
    timeCounter = 0;
}

int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    initializeGraph(n);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; ++i) {
        if (disc[i] == UNVISITED) {
            findArticulationPoints(i);
        }
    }
    for (int i = 0; i < n; ++i) {
        if (articulationPoint[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
