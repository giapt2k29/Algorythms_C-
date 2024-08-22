#include<bits/stdc++.h>
using namespace std;
int iX[4] = {-1, 0, 0, 1};
int iY[4] = {0, 1, -1, 0};
int n, m, r, c, Count = 0;
int iA[1001][1001];
int iD[1001][1001];
queue<pair<int, int>> q;
void solve() {
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++) {
            int newx = x + iX[i];
            int newy = y + iY[i];
            if(newx == 0 || newx == n-1 || newy == 0 || newy == m-1) {
                cout << iD[x][y]+1;
                return;
            }
            if(iA[newx][newy] == 0) {
                q.push({newx, newy});
                iD[newx][newy] = iD[x][y] + 1;
                iA[newx][newy] = 1;
            }
            
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> n >> m >> r >> c;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> iA[i][j];
        }
    }
    q.push({r, c});
    iA[r][c] = 1;
    solve();
    //cout << Count;
}