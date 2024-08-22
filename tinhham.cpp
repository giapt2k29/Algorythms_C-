#include <bits/stdc++.h>
using namespace std;
long long t, x, y, a, b, m, f1[1001], f2[1001][1001];
long long bcnn(long long a, long long b)
{
    return (a ? bcnn(b % a, a) : b);
}
long long xuli(long long a, long long b)
{
    if (!b)
        return 0;
    if (!(b - 1))
        return a;
    if (b % 2)
        return (xuli(a, b / 2) * 2 + a) % m;
    else
        return (xuli(a, b / 2) * 2) % m;
}
int main()
{
    freopen("func.inp", "r", stdin);
    freopen("func.out", "w", stdout);
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> a >> b >> m;
        int i, j;
        f1[1] = 1;
        f1[2] = 1;
        for (i = 3; i < 501; i++)
            f1[i] = (f1[i - 1] + f1[i - 2]) % m;
        for (i = 0; i <= x; i++)
            f2[i][0] = i % m;
        for (i = 0; i <= y; i++)
            f2[0][i] = i % m;
        for (i = 1; i <= x; i++)
        {
            for (j = 1; j <= y; j++)
            {
                f2[i][j] = (xuli(a, f2[i - 1][j]) + xuli(b, f2[i][j - 1]) + f1[bcnn(i, j)]) % m;
            }
        }
        cout << f2[x][y] << endl;
    }
}
