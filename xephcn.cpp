#include<bits/stdc++.h>
using namespace std;
struct ii
{
    int x,y;
};
ii a[100001];
long long n,i,dem,t,j,l[10001];
bool ss(const ii&u,const ii&v)
{
    return u.x<v.x;
}
int main()
{
    freopen("xephcn.inp","r",stdin);
    freopen("xephcn.out","w",stdout);
   cin>>n;
   for(i=1;i<=n;i++)
   {
   cin>>a[i].x>>a[i].y;
      if(a[i].x>a[i].y)
        {
          swap(a[i].x,a[i].y);
       }
   }
   sort(a+1,a+n+1,ss);
   for(i=1;i<=n;i++)
   {
       l[i]=1;
       for(j=1;j<i;j++)
       {
           if((a[i].x>a[j].x)&&(a[i].y>a[j].y))
           {
            l[i]=max(l[i],l[j]+1);
            dem=max(dem,l[i]);
           }
       }
   }
   cout<<dem;
}

