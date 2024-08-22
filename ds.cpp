#include<bits/stdc++.h>
using namespace std;
long long n,a[100000000],i,s,j,dem;
int main()
{
    freopen("ds.inp","r",stdin);
    freopen("ds.out","w",stdout);
   cin>>n;
   for(i=1;i<=n;i++)
   cin>>a[i];
   for(i=1;i<=n;i++)
   {
      s=0;
      for(j=i;j<=n;j++)
      {
         s=s+a[j];
         if(s%n==0)
         dem++;
      }
   }
   cout<<dem;
}
