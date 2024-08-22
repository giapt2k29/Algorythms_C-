#include<bits/stdc++.h>
using namespace std;
int n, iA[1001][1001], iSaveRow[1001], count1 = 0;

// int show() {
//     int count = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             if(iA[i][j] == 1) count++;
//         }
        
//     }
//     return count;
// }
bool IsOk(int iA[1001][1001], int row, int col) {
    // Test row
    for(int v = 0; v < col; v++) {
        if(iA[row][v] == 1) {
            return false;
        }
    }

    int tmp1 = row, tmp2 = col;

    while(tmp1 >= 0 && tmp2 >= 0) {
        if(iA[tmp1][tmp2] == 1) {
            return false;
        }
        tmp1--;
        tmp2--;
    }

    tmp1 = row, tmp2 = col;

    while(tmp2 >= 0 && tmp1 < n) {
        if(iA[tmp1][tmp2] == 1) {
            return false;
        }
        tmp2--;
        tmp1++;
    }
    return true;
}

void setQueen(int iA[1001][1001], int col) {
    for(int i = 0; i < n; i++) {
        if(IsOk(iA, i, col) == true) {
            iA[i][col] = 1;
            if(col == n - 1) {
                count1++;
            }
            else setQueen(iA, col + 1);
            iA[i][col] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.txt", "r", stdin);
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) 
            iA[i][j] = 0;
    }
    setQueen(iA, 0);
    cout << count1;
}