#include<bits/stdc++.h>
using namespace std;
long long n,a[10000000],s,k,j,i,m,p[1000000],c[1000000];
int main()
{
    a[0]=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    cin>>m;
    for(i=1;i<=n;i++)
    {
        c[i]=c[i-1]+a[i];
    }
    for(i=1;i<=m;i++)
    cin>>p[m];
    for(j=1;j<=m;j++)
    {
       for(i=1;i<=n;i++)
       {
          if((p[j]<=c[i])&&(p[j]>=a[i-1]+1))
          cout<<i<<" ";
       }
    }
}
