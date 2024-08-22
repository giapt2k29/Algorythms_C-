#include<bits/stdc++.h>
using namespace std;
int m, n, iH[1001][1001], iL[1001], iR[1001], iD[1001], top, max1 = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    //freopen("test.inp", "r", stdin);
    //freopen("test1.out", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        iH[0][i] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            int x;
            cin >> x;
            iH[i][j] = x ? iH[i - 1][j] + 1 : 0;
        }
    }
    for(int i = 1; i <= n; i++) {
        iD[0] = 0;
        for(int j = 1; j <= m; j++) {
            while(top > 0 && iH[i][iD[top]] >= iH[i][j]) {
                iR[iD[top--]] = j - 1;
            }
            iL[j] = iD[top] + 1;
            iD[++top] = j;
        }
        while(top > 0) {
            iR[iD[top--]] = n;
        }
        for(int j = 1; j <= m; j++) {
            if(iH[i][j] != 0) {
                max1 = max(max1, (iR[j] - iL[j] + 1) * iH[i][j]);
            }
        }
    }
    cout << max1;
}
