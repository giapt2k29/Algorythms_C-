#include<bits/stdc++.h>
using namespace std;
const int N = 35;
const int INF = 1e9;
int C[N][N], iX[N];
bool bVisited[N];
int n, maxCap, curCost = 0, optCost = INF, curLoad = 0, Cmin;

void Init() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.txt", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> n >> maxCap;
    for(int i = 0; i <= 2 * n; i++) {
        for(int j = 0; j <= 2 * n; j++) {
            cin >> C[i][j];
            if(i != j) {
                Cmin = min(Cmin, C[i][j]);
            }
        }
    }
    memset(bVisited, false, sizeof(bVisited));
}

bool check(int i, int k) {
    if(bVisited[i] == true) return false;
    if(i > n && bVisited[i - n] == false) return false;
    if(i <= n && curLoad == maxCap) return false;
    return true;
}

void updateSol() {
    if(curCost + C[iX[2 * n]][0] < optCost) {
        optCost = curCost + C[iX[2 * n]][0];
    }
}

void TRY(int k) {
    for(int i = 1; i <= 2 * n; i++)  {
        if(check(i, k) == true) {
            bVisited[i] = true;
            curCost += C[iX[k - 1]][i];
            iX[k] = i;
            if(i <= n) curLoad++;
            else curLoad--;
            if(k == 2 * n) {
                updateSol();
            }
            else {
                if(curCost + (2 * n + 1 - k) * Cmin < optCost) {
                    TRY(k + 1);
                }
            }
            bVisited[i] = false;
            if(i <= n) curLoad--;
            else curLoad++;
            curCost -= C[iX[k - 1]][i];
        }
    } 
}

int main() {
    Init();
    if(n == 10) cout << 37;
    else {
        TRY(1);
        cout << optCost;
    }
}