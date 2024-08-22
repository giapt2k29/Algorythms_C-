#include<bits/stdc++.h>
using namespace std;
int n, iA[100001], iF[100001], k;
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin.tie(nullptr), cout.tie(nullptr) -> ios_base::sync_with_stdio(false);
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> iA[i];
    }

    iF[0] = 0;

    for(int i = 1; i <= k; i++) {
        iF[i] = abs(iA[0] - iA[i]);
    }

    for(int i = k + 1; i < n; i++) {
        int max1 = 1e9;
        for(int j = 1; j <= k; j++) {
            max1 = min(max1, iF[i - 1 - k + j] + abs(iA[i - 1 - k + j] - iA[i]));
        }
        iF[i] = max1;
    }
    cout << iF[n - 1];
}