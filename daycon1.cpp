#include<bits/stdc++.h>
using namespace std;
long long n,dem,s,a[1000000],i;
int main()
{
    freopen("daycon1.inp","r",stdin);
    freopen("daycon1.out","w",stdout);
   cin>>n;
   for(i=1;i<=n;i++)
   {
      cin>>a[i];
      if(a[i]>=0)
      s=s+a[i];
      else dem++;
   }
   cout<<s<<endl;
   cout<<dem;
}
