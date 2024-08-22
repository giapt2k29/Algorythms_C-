#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main() {
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        for(int j = i; j <= n; j += i) {
            a[j] = 1;
        }
    }
    for(int i = 2; i <= n; i++) {
        if(a[i] == 0) {
            cout << i << " ";
        }
    }
}