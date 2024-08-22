#include<bits/stdc++.h>
using namespace std;
long long a,b,n,p,q,c[100000000],max1,i,s;
int main()
{
    freopen("socola.inp","r",stdin);
    freopen("socola.out","w",stdout);
   cin>>n>>a>>b>>q>>p;
   if(p>q) max1=p;
   else max1=q;
   for(i=1;i<=n;i++)
   {
     if((i%a==0)&&(i%b!=0))
     s=s+q;
     if((i%a!=0)&&(i%b==0))
     s=s+p;
     if((i%a==0)&&(i%b==0))
     s=s+max1;
   }
   cout<<s;
}
