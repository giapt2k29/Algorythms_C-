#include<bits/stdc++.h>
using namespace std;
int n, x, l = 1e9, c = 1e9, s = 0;
int main() {
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        s += x;
        ans += max(ans, s - ((s & 1) ? l : c));
        if(s & 1) {
            l = min(l, s);
        }
        else {
            c = min(c, s);
        }
    }
    cout << ans;
}