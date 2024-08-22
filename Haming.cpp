#include<bits/stdc++.h>
using namespace std;
int t, n, h, iA[1001], iB[1001], sum;
bool dd[1001], dd2[1001];
void output() {
    for(int v = 1; v <= n; v++) 
        cout << iB[v];
    cout << '\n';
}
bool IsOk(int iB[1001]) {
    sum = 0;
    for(int v = n; v >= 1; v--) {
        sum += pow(2, v - 1) * iB[v];
    }
    if(dd2[sum] == false) return false;
    else {
        dd2[sum] = false;
        return true;
    }
}
void Setup(int x) {
    for(int j = 1; j <= n; j++) {
        if(dd[j] == true) {
            dd[j] = false;
            iB[x] = iA[j];
            if(x == n && IsOk(iB) == true) {
                output();
            }
            else Setup(x + 1);
            dd[j] = true;   
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.txt" , "r", stdin);
    cin >> t;
    while(t--) {
        cin >> n >> h;
        for(int i = 1; i <= n - h; i++) {
            iA[i] = 0;
        }
        for(int i = n - h + 1; i <= n; i++) {
            iA[i] = 1;
        }
        memset(dd, true, sizeof(dd));
        memset(dd2, true, sizeof(dd2));
        Setup(1);
    }
}