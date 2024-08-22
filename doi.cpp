#include<bits/stdc++.h>
using namespace std;
int n, T, D, iF[1001];
bool mark[1001];
pair<int, int> *iA;
vector<int> v;
int Solve(pair<int, int> *iA, int i, int Time, int last) {
    cout << i << " " << last << '\n';
    if(mark[i]) return iA[i].first;
    if(i - last > D || i == n) {
        return Time >= T;
    }
    int ans = 0;
    for(int j = 0; j <= 1; j++) {
        if(j == 1 && Time < T) continue;
        if(j == 0) continue;
        ans += Solve(iA, i + 1, j ? Time + iA[i].second : Time, j && i + 1 - last >= D ? i : last);
    }
    mark[i] = 1;
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.inp", "r", stdin);
    cin >> n >> T >> D;
    iA = new pair<int, int>[n];
    for(int i = 0; i < n; i++) {
        cin >> iA[i].first;
    }
    for(int i = 0; i < n; i++) {
        cin >> iA[i].second;
    }  
    Solve(iA, 0, 0, 0);
}