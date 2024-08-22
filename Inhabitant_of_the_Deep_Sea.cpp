#include <bits/stdc++.h>
using namespace std;
int t;
void slove()
{
    int n;
    long long k, sum = 0;
    cin >> n >> k;
    long long a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (k >= sum)
        cout << n << endl;
    else
    {
        int i = 1, ans = 0;
        while (k > 0 && i < n)
        {
            if (a[i] < a[n])
            {
                if (k < 2 * a[i])
                    if (k + 1 == 2 * a[i])
                    {
                        ans++;
                        break;
                    }
                    else
                        break;

                else
                {
                    k -= 2 * a[i];
                    a[n] -= a[i];
                    a[i] = 0;
                    ans++;
                    i++;
                }
            }
            else if (a[i] == a[n])
            {
                if (k < 2 * a[i])
                    if (k + 1 == 2 * a[i])
                    {
                        ans++;
                        break;
                    }
                    else
                        break;

                else
                {
                    k -= 2 * a[i];
                    a[i] = 0;
                    a[n] = 0;
                    ans += 2;
                    i++;
                    n--;
                }
            }
            else
            {
                if (k < 2 * a[n])
                    if (k + 1 == 2 * a[n])
                    {
                        ans++;
                        k = 0;
                    }
                    else
                        break;

                else
                {
                    k -= 2 * a[n];
                    a[i] -= a[n];
                    a[n] = 0;
                    ans++;
                    n--;
                }
            }
        }

        cout << ans << endl;
    }
}
int main()
{
    freopen("test.inp", "r", stdin);
    cin >> t;
    while (t--)
    {
        slove();
    }
}