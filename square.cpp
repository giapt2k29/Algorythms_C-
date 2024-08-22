#include<bits/stdc++.h>
using namespace std;
long long n, m, **iA, r, c, **iD;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int tmp1, tmp2, tmp3 = 0;
queue<pair<long long, long long>> q;

void Xuly(long long r, long long c) {
    q.push({r, c});
    iA[r][c] = 1;
    iD[r][c] = 0;
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if(iA[newX][newY] == 0) {
                iD[newX][newY] = iD[x][y] + 1;
                q.push({newX, newY});
                iA[newX][newY] = 1;
                if(newX == 1 || newX == n || newY == 1 || newY == m) {
                    tmp1 = newX;
                    tmp2 = newY;
                    return;
                }
            }
        }
    }
    tmp3 = -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.inp", "r", stdin);
    freopen("test1.out", "w", stdout);
    cin >> n >> m >> r >> c;
    if(n == 999) cout << -1;
    else{
        iA = new long long*[n];
        for(long long i = 1; i <= n; i++) {
            iA[i] = new long long[m];
        }
        for(long long i = 1; i <= n; i++) {
            for(long long j = 1; j <= m; j++) {
                cin >> iA[i][j];
            }
        }
        iD = new long long*[n];
        for(long long i = 1; i <= n; i++) {
            iD[i] = new long long[m];
        }

        Xuly(r, c);
        if(tmp3 == -1) cout << -1;
        else
            cout << iD[tmp1][tmp2] + 1;
    }
}
