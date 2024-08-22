#include<bits/stdc++.h>
using namespace std;
long long n, ans = INT_MIN, m, iA[1001][1001], r[1001][1001], c[1001][1001], dp[1001][1001];
int main() {
    cin.tie(0), cout.tie(0) -> ios_base::sync_with_stdio(false);

    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> iA[i][j];
            r[i][j] = iA[i][j] == iA[i - 1][j] ? r[i - 1][j] + 1 : 1;
            c[i][j] = iA[i][j] == iA[i][j - 1] ? c[i][j - 1] + 1 : 1;  
            dp[i][j] = iA[j][j] == iA[i - 1][j - 1] ? min(dp[i - 1][j - 1] + 1, min(r[i][j], c[i][j])) : 1;
            ans = max(ans, dp[i][j]);      
        }
    }
    cout << ans;
}