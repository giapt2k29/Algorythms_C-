#include<bits/stdc++.h>
using namespace std;
bool tham[100000];
long long a[1001][1001],q[1000000];
long long n,m,dau,cuoi;
void doc()
{
    freopen("tkcr.inp","r",stdin);
    freopen("tkcr.out","w",stdout);
   long long x,y;
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   tham[i]=true;
   for(int i=1;i<=m;i++)
   {
       cin>>x>>y;
       a[x][y]=1;
       a[y][x]=1;
   }
}
void bfs(int u)
{
   int v,x;
   cout<<u<<" ";
   dau=1;cuoi=1;
   q[cuoi]=u;
   tham[u]=false;
   while(dau<=cuoi)
   {
       x=q[dau];
       dau++;
       for(int v=1;v<=n;v++)
       {
          if((tham[v]==true)&&(a[x][v]==1))
          {
              cuoi++;
              q[cuoi]=v;
              tham[v]=false;
              cout<<v<<" ";
          }
       }
   }
}
void duyet()
{
    for(int i=1;i<=n;i++)
    if(tham[i]==true)
    bfs(i);
}
int main()
{
    doc();
    duyet();
}
