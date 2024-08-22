#include<bits/stdc++.h>
using namespace std;
int t, n, iA[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> t;
    while(t--) {
        int dd = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> iA[i];
        }
        sort(iA, iA + n);
        for(int i = 0; i < n; i++) {
            if(iA[i] == iA[n - 1]) {
                dd++;
            }
        }
        if(dd % 2 == 1) {
            cout << "YES" << '\n';
        }
        else {
            if(n % 2 == 0) {
                cout << "NO" << '\n';
            }
            else {
                cout << "YES" << '\n';
            }
        }
    }
}