#include<bits/stdc++.h>
using namespace std;
int s1, s2, s3;
int main() {
    cin.tie(0), cout.tie(0) -> ios_base::sync_with_stdio(false);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> s1 >> s2 >> s3;
    int dd[100001];
    for(int i = 1; i <= s1; i++) {
        for(int j = 1; j <= s2; j++) {
            for(int k = 1; k <= s3; k++) {
                int sum = i + j + k;
                dd[sum]++;
            }
        }
    }
    int ans = -1e9, save;
    for(int i = 3; i <= 90; i++) {
        if(dd[i] > ans) {
            save = i;
            ans = dd[i];
        }
    }
    cout << save;
}