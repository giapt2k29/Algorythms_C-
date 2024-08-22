#include<bits/stdc++.h>
using namespace std;
bool tham[100001];
long long a[1001][1001];
long long n,m,s,dem,c[100000],k,x,d[100000];
void doc()
{
    cin>>n;
    for(int i=1;i<=n;i++){ tham[i]=true;
    for(int j=1;j<=n;j++)
        cin>>a[i][j];
    }
}
void dfs(int u)
{
    d[x]=u;
    x++;
    tham[u]=false;
    for(int v=1;v<=n;v++)
    {
        if((tham[v]==true)&&(a[u][v]==1)) dfs(v);
    }
}
void duyet()
{
    for(int i=1;i<=n;i++)
    {
        if(tham[i]==true) {dfs(i);cout<<endl;}
        else {c[k]=i;k++;}
    }
}
int main()
{
   // freopen("tkcs.inp","r",stdin);
  //  freopen("tkcs.out","w",stdout);
    doc();
    duyet();
        for(int j=0;j<k;j++)
        {
            for(int i=0;i<x;i++)
            {
            cout<<d[i]<<" ";
            if(d[i]==c[j])
                cout<<endl;
            }
        }
}
