#include<bits/stdc++.h>
using namespace std;
struct ii
{
   int x,y;
};
ii a[1000001];
long long n,k,i,kq,c;
bool ss(const ii&u,const ii&v)
{
   if(u.x-v.x) return (u.x<v.x);
   else return (u.y<v.y);
}
int main()
{
    freopen("dream.inp","r",stdin);
    freopen("dream.out","w",stdout);
   cin>>n>>k;
   for(i=1;i<=n;i++)
   {
      cin>>a[i].x;
      a[i].y=i;
   }
   sort(a+1,a+n+1,ss);
   kq=1;
   c=a[1].y;
   for(i=2;i<=n;i++)
   {
      if(a[i].x==a[i-1].x)
      {
         if(a[i].y-c>=k)
         {
             kq++;
             c=a[i].y;
         }
      }
      else
      {
         kq++;
         c=a[i].y;
      }
   }
   cout<<kq;
}
