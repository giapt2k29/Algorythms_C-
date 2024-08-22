#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

struct City {
    int index;
    int cost;
    int maxDistance;
};

struct Edge {
    int to;
    int cost;
};

void bfs(const vector<vector<int>>& adjList, vector<vector<int>>& reachable, int start, int maxDist) {
    vector<bool> visited(adjList.size(), false);
    queue<pair<int, int>> q;
    q.push({start, 0});
    visited[start] = true;

    while (!q.empty()) {
        auto [current, dist] = q.front();
        q.pop();
        if (dist > maxDist) continue;
        reachable[start].push_back(current);

        for (int neighbor : adjList[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, dist + 1});
            }
        }
    }
}

int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int n, m;
    cin >> n >> m;

    vector<City> cities(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> cities[i].cost >> cities[i].maxDistance;
    }

    vector<vector<int>> adjList(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    vector<vector<int>> reachable(n + 1);
    for (int i = 1; i <= n; ++i) {
        bfs(adjList, reachable, i, cities[i].maxDistance);
    }

    vector<int> minCost(n + 1, INT_MAX);
    minCost[1] = 0;
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;
    pq.push({1, 0});

    while (!pq.empty()) {
        auto [currentCity, currentCost] = pq.top();
        pq.pop();

        if (currentCost > minCost[currentCity]) continue;

        for (int neighbor : reachable[currentCity]) {
            int newCost = currentCost + cities[currentCity].cost;
            if (newCost < minCost[neighbor]) {
                minCost[neighbor] = newCost;
                pq.push({neighbor, newCost});
            }
        }
    }

    int result = minCost[n];
    if (result == INT_MAX) {
        cout << -1 << endl;  // Không thể đến được thành phố n
    } else {
        cout << result << endl;
    }

    return 0;
}
