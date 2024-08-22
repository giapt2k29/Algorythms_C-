#include<bits/stdc++.h>
using namespace std;
#define START 0
int n, **iA, *iX, Dem = 0, Max1 = 1000, *iTmp;
bool *bDD;
void InitData() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    freopen("test.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin >> n;

    iA = new int*[n];
    for(int i = 0; i < n; i++) {
        iA[i] = new int[n];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> iA[i][j];
        }
    }

    iX = new int[n];

    for(int i = 0; i < n; i++) {
        iX[i] = 0;
    }

    bDD = new bool[n];

    for(int i = 0; i < n; i++)
        bDD[i] = false;
    
    iX[0] = START;
    bDD[START] = true;

    iTmp = new int[n];

}


void output() {
    if(Dem + iA[iX[n - 1]][START] < Max1) {
        Max1 = Dem + iA[iX[n - 1]][START];
        for(int v = 0; v < n; v++) {
            iTmp[v] = iX[v] + 1;
        }
    }
}

void Setup(int x) {
    if(Max1 < Dem) {
        return;
    }

    for(int i = 0; i < n; i++) {
        if(bDD[i] == false && iA[iX[x - 1]][i] > 0) {
            iX[x] = i;
            bDD[i] = true;
            Dem += iA[iX[x - 1]][i];
            if(x == n - 1 && iA[iX[n - 1]][START] > 0) {
                output();
            }
            else {
                Setup(x + 1);
            }
            bDD[i] = false;
            Dem -= iA[iX[x - 1]][i];
        } 
    }
}

int main() {
    InitData();

    Setup(1);

    for(int i = 0; i < n; i++) {
        cout << iTmp[i] << "-->";
    }

    cout << START << " Total: " << Max1;

    delete iTmp;
    delete bDD;
    delete iX;
    delete iA;
}