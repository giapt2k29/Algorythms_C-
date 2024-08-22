#include<bits/stdc++.h>
using namespace std;
int n, *iA, t, Count = 0;
int main() {
    freopen("test.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin >> n;
    iA = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> iA[i];
    }
    cin >> t;
    int a, b;
    while(t--) {
        int min1 = 1e9;
        cin >> a >> b;
        for(int i = a; i <= b; i++) {
            if(iA[i] < min1) {
                min1 = iA[i];
            }
        }
        Count += min1;
    }
    cout << Count;
}
