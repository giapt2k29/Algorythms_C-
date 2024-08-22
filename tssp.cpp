#include <bits/stdc++.h>
using namespace std;
long long n,kq=9999999999,c[1001][1001],m[1001],a[10000],d[10],t,min1=99999999999;
void update()
{
    if (kq>t+c[a[n]][1])
    {
        kq=t+c[a[n]][1];
    }
}
void xuli(int i)
{
    for(int j=2;j<=n;j++)
    {
     if (d[j]==0)
     {
        a[i]=j;
        d[j]=1;
        t=t+c[a[i-1]][a[i]];
        if(i==n) update();
        else
        if (t+m[i+1]+min1<kq) xuli(i+1);
        d[j]=0;
        t=t-c[a[i-1]][a[i]];
     }
    }
}
int main()
{
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=n;j++)
         {
            cin>>c[i][j];
            if(min1>c[i][j])
            {
                min1=c[i][j];
            }
         }
            m[i]=min1;
     }
     for(int i=n-1;i>=1;i--)
        m[i]=m[i]+m[i+1];
     a[1]=1,d[1]=1;
     xuli(2);
     cout<<kq;
}
