#include<bits/stdc++.h>
using namespace std;
int n, M, *iA, sum, *iD, result, Count, p;
void Init() {
    cin >> n >> M;
    iA = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> iA[i];
    }

    for(int i = 1; i < n; i++) {
        p += iA[i];
    }
    iD = new int[n];
}

void Setup(int x) {
    iD[x] = M - p - result;
    if(x == n - 1) {
        if(iD[x] % iA[x] == 0) {
            Count++;
        }
        return;
    }
    if(iD[x] >= 1) {
        for(int v = 1; v <= iD[x] / iA[x]; v++) {
            result += v * iA[x];
            p -= iA[x];
            Setup(x + 1);
            result -= v * iA[x];
            p += iA[x];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    Init();
    Setup(0);
    cout << Count;
}