#include<bits/stdc++.h>
using namespace std;
int n, m, iA[10001], sum = 0, result;
void output() {
    for(int v = 1; v <= m; v++) {
        cout << iA[v] << " ";
    }
    cout << '\n';
}
void setting(int x) {
    result = n - sum - (m - x);
    for(int i = 1; i <= result; i++) {
        if(x == m) {
            iA[x] = result;
            output();
            sum = 0;
        }
        else {
            iA[x] = i;
            sum += i;
            setting(x + 1);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.txt", "r", stdin);
    cin >> m >> n;
    setting(1);
}