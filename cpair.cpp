#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],i,dem,x,k;
void xuli(long long i,long long k,long long n)
{
       if(((i+k)<=n)&&(a[i]+a[i+k])<=x)
       {
           dem++;
           xuli(i,k+1,n);
       }
       if((i+k)==n) xuli(i+1,1,n);
}
int main()
{
   freopen("cpair.inp","r",stdin);
   freopen("cpair.out","w",stdout);
   cin>>n>>x;
   for(i=1;i<=n;i++)
   cin>>a[i];
   xuli(1,1,n);
   cout<<dem;
}
