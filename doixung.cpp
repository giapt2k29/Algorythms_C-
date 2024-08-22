#include<bits/stdc++.h>
using namespace std;
long long n, k, iA[100010], dp[100010];
int main() {
    cin.tie(0), cout.tie(0) -> ios_base::sync_with_stdio(false);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i <= k ; i++) {
        int u;
        cin >> u;
        iA[u] = true;
    }
    dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        if(!iA[i]) {
            dp[i] = (i < 1 ? 0 : dp[i - 1]) % 14062008 + (i < 2 ? 0 : dp[i - 2]) % 14062008;
        }
    }   
    cout << dp[n];
}