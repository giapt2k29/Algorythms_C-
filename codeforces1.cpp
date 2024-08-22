#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5 + 10;
long long t, n, iA[N], k;
int main()
{
    freopen("test.inp", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> iA[i];
            sum += iA[i];
        }
        if (sum <= k)
        {
            cout << n << '\n';
        }
        else
        {
            int i = 0, j = n - 1;
            int ans = 0;
            while (k && (i < j))
            {
                if (k >= (2 * min(iA[i], iA[j])))
                {
                    ans++;
                    k -= (2 * min(iA[i], iA[j]));
                    if (iA[i] < iA[j])
                    {
                        iA[j] -= iA[i];
                        i++;
                    }
                    else if (iA[i] == iA[j])
                    {
                        i++;
                        j--;
                        ans++;
                    }
                    else
                    {
                        iA[i] -= iA[j];
                        j--;
                    }
                }
                
                else if ((k + 1) == (2 * min(iA[i], iA[j])) && iA[i] <= iA[j])
                {
                    ans++;
                    break;
                }
                else
                {
                    break;
                }
            }
            cout << ans << endl;
        }
    }
}