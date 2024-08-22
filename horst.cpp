#include<bits/stdc++.h>
using namespace std;
int n, iA[1001][1001], u, v;
bool IsOk(int iA[1001][1001], int row, int col) {
    if(row >= 2 && col >= 1) {
        if(iA[row - 2][col - 1] == 1) return false;
    }

    if(row <= n - 3 && col >= 1) {
        if(iA[row + 2][col - 1] == 1) return false;
    }

    if(row >= 1 && col >= 2) {
        if(iA[row - 2][col - 1] == 1) return false;
    }

    if(row <= n - 2 && col >= 2) {
        if(iA[row + 1][col - 2] == 1) return false;
    }

    if(row >= 2 && col <= n - 2) {
        if(iA[row - 2][col + 1] == 1) return false;
    }

    if(row <= n - 3 && col <= n - 2) {
        if(iA[row + 2][col + 1] == 1) return false;
    }

    if(row >= 1 && col <= n - 3) {
        if(iA[row - 1][col + 2] == 1) return false;
    }

    if(row <= n - 2 && col <= n - 3) {
        if(iA[row + 1][col + 2] == 1) return false;
    }
    
    return true;
}
void SetUp(int iA[1001][1001], int row, int col) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(IsOk(iA, i, j) == true) {

            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n >> u >> v;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            iA[i][j] = 0;
        }
    }
    iA[u][v] = 1;

}