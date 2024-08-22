#include<bits/stdc++.h>
using namespace std;
long long n, iA[100001], iF[1001][1001];
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> iA[i];
    }
    memset(iF, 0, sizeof(iF));
    for(int i = 0; i < n; i++) {
        iF[i][1] = iF[i - 1][1] + iA[i];
    }

    for(int i = 2; i <= 3; i++) {
        for(int j = 0; j < n; j++) {
            iF[j][i] = iF[j - 1][i] + iA[j] * iF[j - 1][i - 1];
        }
    }

    cout << iF[n - 1][3];
}