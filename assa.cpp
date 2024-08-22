#include<bits/stdc++.h>

using namespace std;
int sum;
bool Visited[36];
bool isMagicSquare(const vector<vector<int>>& square) {
    int n = square.size();

    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += square[i][j];
        }
        if (rowSum != sum) {
            return false;
        }
    }

    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += square[i][j];
        }
        if (colSum != sum) {
            return false;
        }
    }

    int diagSum = 0;
    for (int i = 0; i < n; i++) {
        diagSum += square[i][i];
    }
    if (diagSum != sum) {
        return false;
    }

    int antiDiagSum = 0;
    for (int i = 0; i < n; i++) {
        antiDiagSum += square[i][n - 1 - i];
    }
    if (antiDiagSum != sum) {
        return false;
    }

    return true;
}

bool isValid(const vector<vector<int>>& square, int row, int col, int num) {
    int n = square.size();

    for (int j = 0; j < n; j++) {
        if (square[row][j] == num) {
            return false;
        }
    }

    for (int i = 0; i < n; i++) {
        if (square[i][col] == num) {
            return false;
        }
    }

    return true;
}

void printSquare(const vector<vector<int>>& square) {
    int n = square.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << square[i][j] << " ";
        }
        cout << endl;
    }
}

void generateMagicSquares(vector<vector<int>>& square, int row, int col, int n) {
    if (row == n) {
        if (isMagicSquare(square)) {
            printSquare(square);
            cout << endl;
        }
        exit(0);
    }

    for (int num = 1; num <= n * n; num++) {
        if (isValid(square, row, col, num) && Visited[num] == false ) {
            square[row][col] = num;
            Visited[num] = true;
            if (col < n - 1) {
                generateMagicSquares(square, row, col + 1, n);
            } else {
                generateMagicSquares(square, row + 1, 0, n);
            }

            square[row][col] = 0;
            Visited[num] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int n;

    cin >> n;

    sum = (n * n + 1) * (n * n) / (2 * n);

    memset(Visited, false, sizeof(Visited));

    vector<vector<int>> square(n, vector<int>(n, 0));

    generateMagicSquares(square, 0, 0, n);

    return 0;
}