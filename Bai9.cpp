#include<bits/stdc++.h>
using namespace std;
int t;
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> t;
    while(t--) {
        int n, *iA;
        cin >> n;
        iA = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> iA[i];
        }
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                for(int k = i; k <= j; k++){
                    cout << iA[k] << " ";
                }
                cout << '\n';
            }
        }
        cout << "Het test case " << 3 - t<< '\n';
    }
}