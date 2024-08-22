#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj[100011];
int n;

vector<long long> dijkstra(int s){
	vector<long long> d(n+2, 1e18);
	d[s] = 0;
	priority_queue< pair<long long, int> > Q;
	Q.push(make_pair(-d[s], s));
	while (!Q.empty()){
		int x = Q.top().second;
		long long dx = -Q.top().first;
		Q.pop();
		if (dx != d[x]) continue;
		for (auto e : adj[x]){
			int y = e.first, w = e.second;
			if (d[x] + w < d[y]){
				d[y] = d[x] + w;
				Q.push(make_pair(-d[y], y));
			}
		}
	}
	return d;
}

main(){
	int m;
	cin >> n >> m;
	while (m--){
		int x, y, w;
		cin >> x >> y >> w;
		adj[x].push_back(make_pair(y, w));
	}
	int s, t;
	cin >> s >> t;
	auto d = dijkstra(s);
	if (d[t] > 1e17) cout << -1;
	else cout << d[t];
}