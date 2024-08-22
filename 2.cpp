
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define read(a)       \
    for (auto &i : a) \
    cin >> i
// #define mod 998244353
#define mod 1000000007

signed main()
{
    freopen("test.inp", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vi a(n, 0);
        read(a);
        vi b(n + 1, 0);
        read(b);
        int val = b.back();
        int ans = 0;
        int f = 0;
        int add = 1e15;
        for (int i = 0; i < n; i++)
        {
            ans = ans + abs(a[i] - b[i]);
            if (val >= min(a[i], b[i]) and val <= max(a[i], b[i]))
            {
                f = 1;
            }
            add = min(add, abs(a[i] - val));
            add = min(add, abs(b[i] - val));
        }

        if (f)
        {
            ans++;
            cout << ans << endl;
        }
        else
        {
            ans = ans + add + 1;
            cout << ans << endl;
        }
    }

    return 0;
}