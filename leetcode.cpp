#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int iA[1001][1001], Count = 0;
    void set(int iA[1001][1001], int x, int i, int n, bool values)
    {
        for (int j = 1; j <= n; j++)
        {
            iA[j][i] = values;
        }
        for (int j = 1; j <= n; j++)
        {
            iA[x][j] = values;
        }
        for (int j = 0; j <= n && x + j <= n && i + j <= n; j++)
        {
            iA[x + j][i + j] = values;
        }
        for (int j = 0; j <= n && x - j >= 1 && i - j >= 1; j++)
        {
            iA[x - j][i - j] = values;
        }
        for (int j = 0; j <= n && x - j >= 1 && i + j <= n; j++)
        {
            iA[x - j][i + j] = values;
        }
        for (int j = 0; j <= n && x + j <= n && i - j >= 1; j++)
        {
            iA[x + j][i - j] = values;
        }
    }

    void Try(int x, int n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (iA[x][i] == false)
            {
                set(iA, x, i, n, true);
                if (x == n)
                {
                    Count++;
                }
                else if (x < n)
                {
                    Try(x + 1, n);
                }
                set(iA, x, i, n, false);
            }
        }
    }
    int totalNQueens(int n)
    {
        int Count = 0;
        Try(1, n);
        return Count;
    }
};
int main()
{
    Solution sol;
    cout << sol.totalNQueens(4);
}