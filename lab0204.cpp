#include<bits/stdc++.h>
using namespace std;
#define bit(mask, i) ((mask >> i) & 1)
int n, k, Q, iD[15], iA[15][15], DP[9000][15], iF[15][9000];
vector<int> s;
void Init() {
	cin >> n >> k >> Q;
	for(int i = 1; i <= n; i++) {
		cin >> iD[i];
	}

	for(int i = 0; i <= n; i++) {
		for(int j =0; j <= n;j ++) {
			cin >> iA[i][j];
		}
	}
}

void Solve() {
	memset(iF, 1e9, sizeof(iF));
	memset(DP, 1e9, sizeof(DP));
	iF[0][0] = 0;
	DP[0][1] = 0;
	for(int i = 0; i < (1 << (n + 1)); j++) {
		int Cmin = 0;
		for(int j = 1; j <= n; j++) {
			if(bit(i, j)) {
				Cmin += iD[j];
				for(int k = 0; k <= n; k++) {
					iF[i][j] = min(iF[i][j], iF[1 ^ (1 << j)][k] + iA[k][j])
				}
			}
		}
		if(Cmin <= Q && i & 1) {
			s.push_back(i);
		}
	}

	for(int i = 0; i <= k; i++){
		for(int j = 0; j < (1 << (n + 1)); j++) {
			for(int h : s) {
				if((h & j) == h) {
					DP[i][j] = min(DP[i][j], DP[i - 1][j ^ (h - 1)] + iF[h][0]);
				}
			}
		}
	}
	cout << DP[k][1 << (n + 1) - 1];
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	Init();
}