#include<bits/stdc++.h>
using namespace std;
long long m,n,a[10000000],b[1000000],s,i;
bool ss(long long a,long long b)
{
   return (a>b);

}
int main()
{
    freopen("thamquan.inp","r",stdin);
    freopen("thamquan.out","r",stdout);
   cin>>n>>m;
   for(i=1;i<=n;i++)
       cin>>a[i];
   for(i=1;i<=m;i++)
       cin>>b[i];
   sort(a+1,a+n+1,ss);
   sort(b+1,b+m+1);
   for(i=1;i<=n;i++)
   {
      s=s+b[i]*a[i];
   }
   cout<<s;
}
