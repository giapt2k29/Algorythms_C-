#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e9;
int n, k, **iA, *iF, END, *iT, Size = 0, Count = 0;
bool *bCheck;
int Setup(int START, int END) {
    iT = new int[n];
    iF = new int[n];
    bCheck = new bool[n];

    for(int i = 1; i <= n; i++) {
        iT[i] = 0;
        iF[i] = MAX;
        bCheck[i] = true;
    }

    iF[START] = 0;
    int v = START, fmin;
    while(START != END) {
        fmin = MAX;
        for(int i = 1; i <= n; i++) {
            if(bCheck[i] && fmin > iF[i]) {
                fmin = iF[i];
                v = i;
            }
        }
        if(fmin == MAX) break;

        bCheck[v] = false;
        for(int i = 1; i <= n; i++) {
            if(iA[v][i] > 0 && iF[i] > iF[v] + iA[v][i]) {
                iF[i] = iF[v] + iA[v][i];
                iT[i] = v;
                Size ++;
            } 
        }
    }
    return iF[END];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("test.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin >> n >> k;
    iA = new int*[2 * n + 1];
    for(int i = 1; i <= n; i++) {
        iA[i] = new int[2 * n + 1];
    }

    for(int i = 0; i <= 2 * n; i++) {
        for(int j = 0; j <= 2 * n; j++) {
            iA[i][j] = 0;
        }
    }

    for(int i = 0; i <= 2 * n; i++) {
        for(int j = 0; j <= 2 * n; j++) {
            cin >> iA[i][j];
        }
    }
    cout << Setup(1, 4);
}