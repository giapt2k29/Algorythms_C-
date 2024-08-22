#include<bits/stdc++.h>
using namespace std;
long long i,n,a[1000000],tong,p[2000000],m,j,d[1000000];
int main()
{
    freopen("fm.inp","r",stdin);
    freopen("fm.out","w",stdout);
    cin>>n>>m;
    for (i=1;i<=n;i++)
        cin>>a[i];
        sort(a+1,a+n+1);
    for (i=2;i<=n;i++)
    {
        for (j=1;j<i;j++)
        {
            if (a[i]+a[j]>m) break;
        else
        d[a[i]+a[j]]++;
        }
    }
    for (i=1;i<=m;i++)
        tong=tong+d[i];
    cout<<tong;
}
