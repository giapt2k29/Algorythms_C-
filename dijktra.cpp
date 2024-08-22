#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e9;
const int START = 1;
int n, m, **iA, *iF, END, *iT, Size = 0;
bool *bCheck;
void Setup() {
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
}
void output() {
    if(iF[END] == MAX) {
        cout << -1;
    }
    else {
        cout << iF[END] << '\n';
        int iPath[n], d = 0;
        d++;
        iPath[d] = END;
        while(iT[END] != 0) {
            END = iT[END];
            d++;
            iPath[d] = END;
        }

        for(int i = d; i > 0; i--) {
            cout << iPath[i] << " ";
        }
    }
}
int main() {
    cin >> n >> m;
    iA = new int*[n + 1];
    for(int i = 1; i <= n; i++) {
        iA[i] = new int[n + 1];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            iA[i][j] = 0;
        }
    }

    iT = new int[n];
    iF = new int[n];
    bCheck = new bool[n];
    END = n;

    for(int i = 1; i <= n; i++) {
        iT[i] = 0;
        iF[i] = MAX;
        bCheck[i] = true;
    }
    for(int i = 1; i <= m; i++) {
        int u, v, x;
        cin >> u >> v >> x;
        iA[u][v] = x;
        iA[v][u] = x;
    }
    Setup();
    output();
}