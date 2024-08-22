#include<bits/stdc++.h>
using namespace std;
long long a[10000000],n,d[10000000],i,dem,s;
int main()
{
    freopen("bai3_10_2012_2013.inp","r",stdin);
    freopen("bai3_10_2012_2013.out","w",stdout);
     cin>>n;
     for(i=1;i<=n;i++)
     cin>>a[i];
     for(i=1;i<=n;i++)
     d[a[i]]++;
     for(i=1;i<=9999999;i++)
     {
         if(d[i]%i==0) {dem=d[i]/i;s=s+dem;}
         else {dem=d[i]/i+1;
               s=s+dem;}
     }
     cout<<s;
}
