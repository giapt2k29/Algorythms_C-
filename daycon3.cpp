#include<bits/stdc++.h>
using namespace std;
long long dem,i,n,k,a[1000000];
int main()
{
   freopen("daycon3.inp","r",stdin);
   freopen("daycon3.out","w",stdout);
   cin>>n>>k;
   for(i=1;i<=n;i++)
   {
      cin>>a[i];
      if(a[i]==k) cout<<i<<" ";
   }
}
