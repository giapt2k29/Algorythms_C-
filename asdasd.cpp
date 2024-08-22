#include<bits/stdc++.h>
using namespace std;
const int N = 6;
int n, iA[N][N], result;
bool bVisited[N * N];
void Init() {
	cin >> n;
	memset(iA, 0, sizeof(iA));
}

void output() {
	for(int i = 0; i < n ;i++) {
		for(int j = 0; j < n; j++) {
			cout << iA[i][j] << " ";
		}
		cout << '\n';
	}
}

bool check() {
	for(int i = 0; i < n; i++) {
        int cot = 0;
		for(int j = 0; j < n; j++) {
			cot += iA[i][j];
		}
        if(cot != result) return false;
	}

	for(int i = 0; i < n; i++) {
        int hang = 0;
		for(int j = 0; j < n; j++) {
			hang += iA[j][i];
		}
        if(hang != result) return false;
	}

    int cheo1 = 0;
	for(int i = 0; i < n; i++) {
		cheo1 += iA[i][i];
	}

    if(cheo1 != result) return false;

    int cheo2 = 0;
	for(int i = 0; i < n; i++) {
		cheo2 += iA[i][n - i - 1];
	}

    if(cheo2 != result) return false;
    
    return true;
}

void TRY(int row, int col) {
    if(row == n - 1) return;
	for(int i = 1; i <= n * n; i++) {
		if(bVisited[i] == false)
		{
			iA[row][col] = i;
            bVisited[i] = true;
			if(col < n - 1) TRY(row, col + 1);
			else {
				TRY(row + 1, 0);
			}
			iA[row][col] = 0;
            bVisited[i] = false;
		}
	}
}
int main() {
	Init();
    memset(bVisited, false, sizeof(bVisited));
    result = (n * n + 1) * (n * n) / (2 * n);
	TRY(0, 0);
    output();
}