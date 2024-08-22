#include<bits/stdc++.h>
using namespace std;
const int N = 35;
long long t, n, iA[N][N];
long long dp[200000][N];
int calc(int mask, int k) {
	if(k == n) return 1;
	if(dp[mask][k] != -1) {
		return dp[mask][k];
	}

	long long ans = 0;
	for(int i = 0; i < n; i++) {
		if(iA[i][k] && !(mask & (1 << i))) {
			ans += calc(mask | (1 << i), k + 1);
		}
	}

	return dp[mask][k] = ans;
}

void Init() {
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> t;
	while(t--) {
		memset(iA, 0, sizeof(iA));
		memset(dp, -1, sizeof(dp));
		cin >> n;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> iA[i][j];
			}
		}
		calc(0, 0);
		cout << dp[0][0] << '\n';
	}

}

int main() {
	Init();
}