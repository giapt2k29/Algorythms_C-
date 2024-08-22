#include<bits/stdc++.h>
using namespace std;
int n, m, s;
vector<pair<int, int>> adj[100001];
void input() {
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
    }
}
void dijktra(int s) {
    vector<long long> d(n + 1, INFINITY);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

    Q.push({0, s});

    while(!Q.empty()) {
        pair<int, int> top = Q.top();
        Q.pop();
        int u = top.second;
        int kc = top.first;

        if(kc > d[u]) continue;
        
        for(auto it : adj[u]) {
            int v = it.first; //Đỉnh kề
            int w = it.second; //chi phí
            if(d[u] + w < d[v]) {
                d[v] = d[u] + w;
                Q.push({d[v], v});
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << d[i] << " ";
    }
}
int main() {
    input();
    dijktra(s);
}
/*
    6 7 1
    1 2 7
    1 3 12
    2 4 9
    2 3 2
    3 5 10
    5 4 4
    5 6 5
    4 6 1
*/