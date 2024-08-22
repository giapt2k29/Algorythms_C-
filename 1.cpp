#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("test.inp", "r", stdin);
    int t;
    cin >> t;
    while(t--) {
        int n;
        bool dd = false;
        string s;
        cin >> n;
        cin >> s;
        for(int i = 0; i < n - 1; i++) {
            if(s[i + 1] < s[i]) {
                dd = true;
            }
            if(s[i] >= 'a' && s[i] <= 'z') {
                if(s[i + 1] >= '0' && s[i] <= '9') {
                    dd = true;
                }
            }
        }
        if(dd == true) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
}