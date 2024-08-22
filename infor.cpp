#include<bits/stdc++.h>
using namespace std;
long long a[1001][1001],truoc[1001],q[1001];
bool tham[1001];
int s,t,n;
void doc()
{
   int x=1,y;
   cin>>t;
   while(cin>>y)
   {
      a[x][y]=1;
      a[y][x]=1;
      x++;
   }
}
void bfs(int v)
{
   int p,u,dau,cuoi;
   dau=1;cuoi=1;q[cuoi]=v;
   tham[v]=true;
   while(dau<=cuoi)
   {
      p=q[dau];dau++;
      for(u=1;u<=n;u++)
      {
         if((a[p][u]==1)&&(tham[u]==false))
         {
            cuoi++;q[cuoi]=u;
            tham[u]=true;truoc[u]=p;
            if(u==t) break;
         }
      }
   }
}
void kq()
{
  int j,dem=0;
  if(truoc[t]==0) cout<<"khong ton tai duong di";
  else
     {
         j=t;
         while(truoc[j]>0)
         {
            dem++;
            q[dem]=j;
            j=truoc[j];
         }
        dem++;q[dem]=s;
        for(j=dem;j>=1;j--) cout<<q[j]<<endl;
     }
}
int main()
{
  freopen("infor.inp","r",stdin);
  freopen("infor.out","w",stdout);
   doc();
   for(s=1;s<=n;s++)
    bfs(s);
   kq();
   return 0;
}
