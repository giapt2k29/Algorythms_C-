#include<bits/stdc++.h>
using namespace std;
// inline int Max(int a, int b) {
//     return max(a, b);
// }
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin.tie(0), cout.tie(0) -> ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    auto fibo = [&](auto& self, int n) -> int {
        if(n == 1 or n == 2) return 1;
        else {
            return self(self, n - 1) + self(self, n - 2);
        }
    };

    cout << fibo(fibo, n);
}