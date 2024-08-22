#include<bits/stdc++.h>
using namespace std;
long long m,n,i,a[1001][1001],u,v;
bool b[100000],tham;
void dfs(long long u)
{
   long long v,i;
   b[u]=false;
   for(v=1;v<=n;v++)
   {
       if((b[v]==true)&&(a[u][v]==1))
       dfs(v);
   }
}
int main()
{
    cin>>n>>m;
    memset(a,0,sizeof(a));
    memset(b,true,sizeof(b));
    for(i=1;i<=m;i++)
    {
       cin>>u>>v;
       a[u][v]=1;
       a[v][u]=1;
    }
    dfs(1);
    tham=false;
    for(i=1;i<=n;i++)
    {
        if(b[i]==true)
        {
        cout<<i<<endl;
        tham=true;
        }
    }
        if(tham==false) cout<<0<<endl;
    }
