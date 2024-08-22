#include<bits/stdc++.h>
using namespace std;
int n;
struct Khobau {
    int x, y, Gold;
};
bool sortfunc(const Khobau &a, const Khobau &b) {
    if(a.x != b.x) return a.x < b.x;
    return a.y < b.y;
}
int main() {
    freopen("test.inp", "r", stdin);
    cin >> n;
    vector<Khobau> v(n);
    for(int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        v[i].x = x;
        v[i].y = y;
        v[i].Gold = z;
    }
    sort(v.begin(), v.end(), sortfunc);
    int *dp = new int[n];
    for(int i = 0; i < n; i++) {
        dp[i] = v[i].Gold;
        for(int j = 0; j < i; j++) {
            if(v[i].x >= v[j].x && v[i].y >= v[j].y) {
                dp[i] = max(dp[i], dp[j] + v[i].Gold);
            }
        }
    }
    int ans = -1e9;
    for(int i = 0; i < n; i++) {
        cout << dp[i] << " " ;
    }
}