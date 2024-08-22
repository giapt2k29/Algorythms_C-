#include<bits/stdc++.h>
using namespace std;
int iA[9][9];
void output() {
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= 9; j++) {
            cout << iA[i][j] << " ";
        }
        cout << '\n';
    }
}

bool Check(int iA[9][9], int row, int col, int x) {
    for(int i = 1; i <= 9; i++) {
        if(iA[i][col] == x) return false;
    }

    for(int i = 1; i <= 9; i++) {
        if(iA[row][i] == x) return false;
    }

    int StartX = row - row % 3 + 1;
    int StartY = col - col % 3 + 1;

    for(int i = StartX; i <= 2 + StartX; i++) {
        for(int j = StartY; j <= 2 + StartY; j++) {
            if(iA[i][j] == x) return false;
        }
    }

    return true;
}

bool Setup(int iA[9][9], int row, int col) {
    if(row == 9 && col == 9) {
        return true;
    }

    if(col == 9 && row < 9) {
        row = row + 1;
        col = 1;
    }

    if(iA[row][col] != 0) {
        return Setup(iA, row, col + 1);
    }
    for(int v = 1; v <= 9; v++) {
        if(Check(iA, row, col, v) == true) {
            iA[row][col] = v;
            if(Setup(iA, row, col + 1) == true) {
                return true;
            }
            iA[row][col] = 0;
        }
    }

    return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("test.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= 9; j++) {
            cin >> iA[i][j];
        }
    }
    Setup(iA, 1, 1);
    output();
}