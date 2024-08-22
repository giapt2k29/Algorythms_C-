#include<bits/stdc++.h>
using namespace std;
int t, n;
int main() {
    cin.tie(0), cout.tie(0) -> ios_base::sync_with_stdio(false);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int iF[100001];
    iF[0] = 1;
    iF[1] = 1;
    for(int i = 2; i <= 100; i++) {
        iF[i] = iF[i - 1] + iF[i - 2];
    }
    cin >> t;
    while(t--) {
        cin >> n;  
        cout << iF[n] << '\n';
    }
}