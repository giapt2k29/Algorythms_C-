#include<bits/stdc++.h>
using namespace std;
pair<int, int> iA[100001];
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> iA[i].first >> iA[i].second;
    }

    int l[1001][1001];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < W; j++) {
            l[i][j] = max(l[i - 1][j - iA[i].first] + iA[i].second, l[i - 1][j]);
        }
    }
}