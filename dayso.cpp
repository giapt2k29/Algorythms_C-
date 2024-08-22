#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000],i,d[100000],c,max1,k;
int main()
{
   freopen("dayso.inp","r",stdin);
    freopen("dayso.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(d[i]>max1)
        {
           max1=d[i];
           c=i;
        }
    }
    for(i=1;i<=n;i++)
    {
       if(a[i]!=c)
       cout<<a[i]<<" ";
    }
    for(k=1;k<=max1;k++)
    cout<<c<<" ";
}
