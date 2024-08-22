#include<bits/stdc++.h>
using namespace std;
long long n, x, l = 0, c = 0, s = 0;
int main() {
    freopen("test.inp", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long ans = -1e9;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        s += x;
        ans = max(ans, s - ((s & 1) ? l : c));
        if(s & 1) {
            l = min(l, s);
        }
        else {
            c = min(c, s);
        }
    }
    cout << ans;
}