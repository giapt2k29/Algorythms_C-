#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, iA[100001], tong = 0, L[10001];
    vector<int> vt, vc;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> iA[i];
        tong += iA[i];
    }
    L[0] = 1;
    int h = 1;
    int k = 0;
    while(h) {
        memset(L, 0, sizeof(L));
        vector<int> vt;
        int last = tong / 2 - k;
        L[iA[0]] = 1;
        for(int i = 0; i < n; i++) {
            for(int t = last; t >= iA[i]; t--) {
                if(L[t] == 0 && L[t - iA[i]] == 1) {
                    L[t] = 1;
                    vt.push_back(i);
                }
            }
        }
        if(L[last] == 1) {
            for(auto v : vt) {
                cout << v << " ";
            }
            break;
        }
        else {
            k++;
        }
    }
    for(int v : vt) {
        cout << v << " ";
    }
}