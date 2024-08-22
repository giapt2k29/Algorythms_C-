#include<bits/stdc++.h>
using namespace std;
const int N = 35;
int m, n, load[N], K, MaxLoad = 0, ans = 1e9, iX[N];
bool C[N][N];
vector<int> V[N];
void Init() {
	cin >> m >> n;
	for(int i = 1; i <= m; i++) {
		int u;
		cin >> u;
		for (int j = 0; j < u; j++) {
			int x;
			cin >> x;
			V[x].push_back(i);
		}
	}

	cin >> K;
	for(int i = 0; i < K; i++) {
		int x, y;
		cin >> x >> y;
		C[x][y] = true;
		C[y][x] = true;
	}
}

bool check(int t, int k) {
	for(int i = 1; i <= n; i++) {
		if(C[i][k] && iX[i] == t) return false;
	}
	return true;
}

void UpdateSol() {
	int MaxLoad = load[1];
	for(int i = 2; i <= m; i++) {
		MaxLoad = max(MaxLoad, load[i]);
	}
	ans = min(ans, MaxLoad);
}
void TRY(int k) {
	for(int t : V[k]) {
		if(check(t, k)) {
			load[t]++;
			iX[k] = t;
			if(k == n) {
				UpdateSol();
			}
			else {
				if(load[t] < ans) {
					TRY(k + 1);
				}
			}
            load[t]--;
            iX[k] = 0;
		}
	}
}
main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	Init();
	TRY(1);
	if(ans == 1e9) cout << -1;
	else cout << ans;
}