#include<bits/stdc++.h>
using namespace std;

void dfs(int node, const vector<vector<int>>& graph, vector<bool>& visited, stack<int>& topoStack) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited, topoStack);
        }
    }
    topoStack.push(node);
}

int earliestCompletionTime(int n, int m, vector<int>& d, vector<pair<int, int>>& edges) {
    vector<vector<int>> graph(n);
    for (const auto& edge : edges) {
        graph[edge.first].push_back(edge.second);
    }

    stack<int> topoStack;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            dfs(i, graph, visited, topoStack);
        }
    }
    vector<int> completion_time(n, 0);
    while (!topoStack.empty()) {
        int node = topoStack.top();
        topoStack.pop();
        for (int neighbor : graph[node]) {
            completion_time[neighbor] = max(completion_time[neighbor], completion_time[node] + d[node]);
        }
    }
    int earliest_completion = 0;
    for (int i = 0; i < n; ++i) {
        earliest_completion = max(earliest_completion, completion_time[i] + d[i]);
    }

    return earliest_completion;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<int> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    vector<pair<int, int>> edges(m);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u - 1, v - 1};
    }

    cout << earliestCompletionTime(n, m, d, edges) << endl;

    return 0;
}
