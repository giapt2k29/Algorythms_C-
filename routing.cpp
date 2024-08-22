#include<bits/stdc++.h>
using namespace std;
const int N = 15;
const int INF = 1e9;
int n, K, Q, d[N], C[N][N], X[N], s = 0, load[N], curCost, f, optCost, MIN = INF;
bool Visited[N];
void Init() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	cin >> n >> K >> Q;
	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= n; j++) {
			cin >> C[i][j];
		}
	}
	memset(Visited, false, sizeof(Visited));
}

bool check(int i, int k) {
	if(i == 0) return true;
	if(load[k] + d[i] > Q) {
		return false;
	}
	if(Visited[i] == true) {
		return false;
	}
	return true;
}

void updateSol() {
	MIN = min(f, MIN);
}

void TRY(int k) {
	s = 0;
	if(X[k - 1] > 0) {
		s = X[k - 1] + 1;
	}
	for(int i = s; i <= n; i++) {
		if(check(i, k)) {
			X[k] = i;
			if(i > 0) {
				curCost++;
			}
			Visited[i] = true;
			load[k] += d[i];
			f += C[0][i];
			if(k == K) {
				updateSol();
			}
			else {
				TRY(k + 1);
			}
			load[k] -= d[i];
			Visited[i] = false;
			f -= C[0][i];
			if(i > 0) curCost--;
		}
	}
}

int main() {
	Init();
	TRY(1);
	cout << MIN;
}