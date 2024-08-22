#include<bits/stdc++.h>
using namespace std;
long long n, m, iA[1001][1001], dp[1001][1001];
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin.tie(0), cout.tie(0) -> ios_base::sync_with_stdio(false);
    cin >> m >> n;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> iA[i][j];
        }
    }

    for(int i = 1; i <= m; i++) {
        dp[i][1] = iA[i][1];
    }

    for(int j = 2; j <= n; j++) {
        for(int i = 1; i <= m; i++) {
            dp[i][j] = max(max(dp[i - 1][j - 1], dp[i][j - 1]), dp[i + 1][j - 1]) + iA[i][j];
        }
    }

    long long ans = INT_MIN;

    for(int i = 1; i <= m; i++) {
        ans = max(ans, dp[i][n]);
    }

    cout << ans;
}