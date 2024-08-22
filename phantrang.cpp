#include<bits/stdc++.h>
using namespace std;
int n, t[100001], r[100001];
main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin.tie(nullptr), cout.tie(nullptr) -> ios_base::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> t[i];
    }
    for(int i = 1; i <= n - 1; i++) {
        cin >> r[i];
    }

    int dp[100001];
    dp[n] = t[n];
    for(int i = n - 1; i >= 1; i--) {
        dp[i] = min(dp[i + 1] + t[i], dp[i + 2] + r[i]);
    }

    cout << dp[1];
}