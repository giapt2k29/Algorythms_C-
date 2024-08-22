#include<bits/stdc++.h>
using namespace std;
int t, n, m, iA[10001], iB[100001];
void binarysearch(int l, int r, int *iB) {
    if(l == r) {
        return;
    }
    int mid = (l + r) / 2;
    if(iA)
}
int main() {
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> iA[i];
        }
        cin >> m;
        for(int i = 0; i < m; i++) {
            cin >> iB[i];
        }
        sort(iA, iA + n);
        sort(iB, iB + m);
    }
}