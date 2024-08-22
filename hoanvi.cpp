#include<bits/stdc++.h>
using namespace std;
int n, iA[1001], iDD[1001];
void output() {
    for(int i = 1; i <= n; i++) 
        cout << iA[i] << " ";
    cout << '\n';
}

void setting(int x) {
    for(int i = 1; i <= n; i++) {
        if(iDD[i] == 0) {
            iDD[i] = 1;
            iA[x] = i;
            if(x == n) output();
            else setting(x + 1);
            iDD[i] = 0;
        }
    }
}
int main() {
    n = 2;
    memset(iDD, 0, sizeof(iDD));
    setting(1);
}