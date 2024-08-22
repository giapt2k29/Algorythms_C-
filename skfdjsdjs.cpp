#include<bits/stdc++.h>
using namespace std;
void xuli(int n, int x[], int t[], int i,int m)
{
    int j;
    for(j = x[i - 1]; j <= (n - t[i - 1]); j++)
    {
        x[i]=j;
        t[i]=t[i - 1]+j;
        if((t[i]==n)&&(i==m))
        {
            int temp;
            for(temp = 1;  temp <= i; temp++)
            {
                cout<<x[temp]<<" ";
            }
        }

        else
        {
            xuli(n, x, t, i + 1,m);
        }
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    int x[n + 1];
    int t[n + 1];
    x[0] = 1;
    t[0] = 0;
    xuli(n, x, t, 1,m);

}
