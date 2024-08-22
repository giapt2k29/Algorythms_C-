#include<bits/stdc++.h>
using namespace std;
int iA[100001], n, L[1001], s;
int main() {
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        cin >> iA[i];
    }
    L[iA[0]] = 1;
    for(int i = 0; i < n; i++) {
        for(int t = s; t >= iA[i]; t--) {
            if(L[t] == 0 && L[t - iA[i]] == 1) {
                L[t] = 1;
            } 
        }
    }
    if(L[s] == 1) cout << "YES";
    else {
        cout << "NO";
    }
}
