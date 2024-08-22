#include <bits/stdc++.h>
using namespace std;
int n, k, a[10], d[10], s, dem, gt[10000], vt[1000], kq, p[1000];
void out()
{
    if (dem == s)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
void xuli(int i)
{
    for (int j = 1; j <= n; j++)
        if (d[j])
        {
            a[i] = j;
            d[j] = 0;
            if (i == k)
            {
                dem++;
                out();
            }
            else
                xuli(i + 1);
            d[j] = 1;
        }
}
int main()
{
    cin >> n >> k;
    memset(d, 1, sizeof(d));
    xuli(1);
}
