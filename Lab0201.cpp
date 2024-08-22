#include<bits/stdc++.h>
using namespace std;
int n, m, k, h, iA[1001][1001];
vector<int> v[10001];
void InitData() {
    cin >> m >> n;
    for(int i = 1; i <= m; i++) {
        cin >> k;
        for(int j = 1; j <= k; j++) {
            int u;
            cin >> u;
            v[i].push_back(u);
        }
    }

    cin >> h;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            iA[i][j] = 1;
    }

    for(int i = 0; i < h; i++) {
        int u, v;
        cin >> u >> v;
        iA[u][v] = 0;
        iA[v][u] = 0;
    }
}
int Count = 0;

void Setting(int x) {
    int dd = 0;
    if(x == n) {
        cout << Count;
    }
    for(int j = 0; j < v[x].size() - 1; j++){
        if(iA[v[x][j]][v[x][j + 1]] == 0) {
            Setting(x + 1);
        }
        else {
            dd ++;
            iA[v[x][j]][v[x][j + 1]] = 0;
        }
        iA[v[x][j]][v[x][j + 1]] = 1;
        if(dd == v[x].size() - 1) {
            Count += 1;

        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    //freopen("test.inp", "r", stdin);
    //freopen("test.out", "w", stdout);
    InitData();
    Setting(1);
}