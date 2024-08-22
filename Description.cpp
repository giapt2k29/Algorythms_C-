#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int Maxload = INF;
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
    for(int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        conflicts[x][y] = conflicts[y][x] = true;
    }
}

bool check(int t, int k) {
    for(int i = 1; i < k; i++ ) {
        if(iX[i] == t && conflicts[i][k]) return false;
    }
    return true;
}

void updateSol() {
    int MaxLoad = load[1];
    for(int i = 2; i <= n; i++) {
        MaxLoad = max(MaxLoad, load[i]);
    }
    Maxload = min(Maxload, MaxLoad);
}
void TRY(int k) {
    for(int t : v[k]) {
        if(check(t, k)) {
            iX[k] = t;
            load[t]++;
            if(k == n) {
                updateSol();
            }
            else {
                if(load[t] < Maxload) {
                    TRY(k + 1);
                }
            }
            load[t] --;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.txt", "r", stdin);
    freopen("test.out", "w", stdout);
    Init();
    TRY(1);
    if(Maxload == INF) cout << -1;
    else cout << Maxload;
}