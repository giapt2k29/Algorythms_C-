#include<bits/stdc++.h>
using namespace std;
int n, iA[100001], t, max1 = -1e9;
void solve() {
    max1 = -1e9;
    unordered_map<int, int> iD;
    for(int i = 0; i < n; i++) {
        if(iD.find(iA[i] - 1) != iD.end()) {
            iD[iA[i]] = iD[iA[i] - 1] + 1;
        }
        else {
            iD[iA[i]] = 1;
        }
        max1 = max(max1, iD[iA[i]]);
    }
    cout << max1;
}
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> iA[i];
        }
        solve();
    }
}