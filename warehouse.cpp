#include<bits/stdc++.h>
using namespace std;
int n, T, D, dp[1001][1001], ans = -1e9;
pair<int, int> iA[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n >> T >> D;
    for(int i = 0; i < n; i++) {
        cin >> iA[i].first;
    }
    for(int j = 0; j < n; j++) {
        cin >> iA[j].second;
    }
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < T; k++) {
            for(int j = max(i - D, 0); j < i; j++) {
                dp[i][k] = max(dp[i][k], dp[i - j][k - iA[i].second] + iA[i].first);
            }
            ans = max(ans, dp[i][k]);
        }
    }
    cout << ans;

}