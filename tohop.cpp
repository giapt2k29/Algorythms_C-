#include<bits/stdc++.h>
using namespace std;
int n, m, iA[1001], iDD[1001], iNew[1001];
void output() {
    for(int i = 1; i <= m; i++) 
        cout << iA[i] << " ";
    cout << '\n';
}

void setting(int x) {
    for(int i = iA[x - 1]; i <= n - m + x; i++) {
        iA[x] = i;
        if(x == m) output();
        else setting(x + 1);
    }
}
int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) 
        iNew[i] = i;
    memset(iDD, 0, sizeof(iDD));
    setting(0);
}