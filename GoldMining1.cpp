#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int n, L1, L2, x, ST[N], dp[N];
void Update(int i, int l, int r, int pos) {
    if(l > pos || r < pos) {
        return;
    }
    if(l == r) {
        ST[i] = dp[l];
        return;
    }
    int mid = (l + r) / 2;
    Update(2 * i, l, mid, pos);
    Update(2 * i + 1, mid + 1, r, pos);
    ST[i] = max(ST[2 * i], ST[2 * i + 1]);
}
int Get(int i, int l, int r, int n1, int n2) {
    if(l > n2 || r < n1) {
        return 0;
    }
    if(l <= n2 && r >= n1) {
        return ST[i];
    }
    int mid = (l + r) / 2;
    return max(Get(2 * i, l, mid, n1, n2), Get(2 * i + 1, mid + 1, r, n1, n2));
}
int main() {
    int ans = -1e9;
    freopen("test.inp", "r", stdin);
    cin >> n >> L1 >> L2;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(i >= L2) {
            long long z = Get(1, 0, n - 1, max(0, i - L2), i - L1);
            dp[i] = x + z;
        }
        Update(1, 0, n - 1, i);
        ans = max(ans, dp[i]);
    }
    cout << ans;
}