#include<bits/stdc++.h>
using namespace std;
#define bit(i, j) ((i >> j) & 1)
int n, K, Q, *iD, **iA, DP[20][9000], iF[9000][20];
vector<int> s;
void Init() {
	cin >> n >> K >> Q;

	iD = new int[n + 1];
	for(int i = 1; i <= n; i++) {
		cin >> iD[i];
	}

	iA = new int*[n + 1];
	for(int i = 0; i <= n; i++) {
		iA[i] = new int[n + 1];
	}

	for(int i = 0; i <= n; i++) {
		for(int j = 0; j <= n; j++) {
			cin >> iA[i][j];
		}
	}
}

void Solve() {
	memset(iF, 1e9, sizeof(iF));
	memset(DP, 1e9, sizeof(DP));

	iF[0][0] = 0;
	DP[0][1] = 0;

	for(int i = 0; i < (1 << (n + 1)) ; i++) {
		int c = 0;
		for(int j = 0; j <= n; j++) {
			if(i >> j & 1) {
				c += iD[j];
				for(int k = 0; k <= n; k++) {
					iF[i][j] = min(iF[i][j], iF[1 ^ (1 << j)][k] + iA[k][j]);
				}
			}
		}
		if(c <= Q && i & 1) {
			s.push_back(i);
		}
	}

	for(int i = 1; i <= K; i++) {
		for(int j = 1; j <= (1 << (n + 1)); j++) {
			for(int h : s) {
				if((h & j) == h) {
					DP[i][j] = min(DP[i][j], DP[i - 1][j ^ (h - 1)] + iF[h][0]);
				}
			}
		}
	}
	cout << DP[K][1 << (n + 1) - 1];
}
main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	Init();
	Solve();
} 