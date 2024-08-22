#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int Maxload = INF;
int maxload = INF;
const int N = 35;
int m, n, k, iX[N], load[N]; 
bool conflicts[N][N];
vector<int> v[N];

void Init() {
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        int u;
        cin >> u;
        for(int j = 0; j < u ; j++) {
            int x;
            cin >> x;
            v[x].push_back(i);
        }
    }

    cin >> k;
    for(int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        conflicts[x][y] = conflicts[y][x] = true;
    }
}

bool check(int t, int k) {
    for(int i = 0; i < k; i++ ) {
        if(iX[i] == t && conflicts[i][k]) return false;
    }
    return true;
}

void updateSol() {
    int MaxLoad = load[0];
    for(int i = 1; i < m; i++) {
        MaxLoad = max(MaxLoad, load[i]);
    }
    maxload = min(maxload, MaxLoad);
}
void TRY(int k) {
    for(int t : v[k]) {
        if(check(t, k)) {
            iX[k] = t;
            load[t]++;
            if(k == n - 1) {
                updateSol();
            }
            else {
                if(load[t] < Maxload) {
                    TRY(k + 1);
                }
                load[t]--;
                iX[k] = 0;
            }
        }
    }
}
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    Init();
    TRY(0);
    if(maxload == INF) cout << -1;
    else cout << maxload;
}
