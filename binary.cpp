#include<bits/stdc++.h>
using namespace std;
int n, a[10001];
void output() {
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << '\n';
}
void try1(int x) {
    for(int i = 0; i <= 1; i++) {
        a[x] = i;
        if(x == n) output();
        else try1(x + 1);
    }
}
int main() {
    n = 5;
    try1(1);
}