#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000],kq[10000000],i;
int main()
{
    freopen("bai2_10_2015_2016.inp","r",stdin);
    freopen("bai2_10_2015_2016.out","w",stdout);
     cin>>n;
     for(i=1;i<=n;i++)
     {
     cin>>a[i];
     kq[a[i]]=i;
     }
     sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
    {
         cout<<kq[a[i]]<<" ";
    }
}
