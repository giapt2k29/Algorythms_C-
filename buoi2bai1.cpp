#include<bits/stdc++.h>
using namespace std;
int n, M, *iA;

void Setting() {

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> n >> M;

    iA = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> iA[i];
    }

}
