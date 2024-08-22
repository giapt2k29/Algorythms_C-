#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100011],e[100011];
int mark[1000011];
int s,t;
void dfs(int x)
{
    if(mark[x]++) return;
    for(int y:adj[x]) dfs(y);
}
void bfs(int s)
{
   memset(mark,255,sizeof(mark));
   vector<int> q(1,s);
   mark[s]=0;
   for(int i=0;i<q.size();++i)
   {
       int x=q[i];
       for(int y:e[x]) if(mark[y]==-1)
       {
           q.push_back(y);
           mark[y]=mark[x]+1;
       }
   }
}
bool dfs3(int x)
{
    if(x==t) return true;
    for(int y:e[x])
        {
          mark[y]=x;
          if(dfs3(y)) return true;
        }
    return false;
}
main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        e[x].push_back(y);
    }
    cin>>s>>t;
    int ans=0;
    for(int x=1;x<=n;++x)
        if(!mark[x])
         {
           ++ans;
           dfs(x);
         }
         cout<<ans<<endl;
         ans=n+1;
         bfs(s);
         cout<<mark[t]+1<<endl;
         for(int x=1;x<n;++x) adj[x].clear();
         for(int x=1;x<=n;++x) for(int y:e[x])
         {
             adj[y].push_back(x);
         }
         for(int x=1;x<n;++x) e[x].clear();
         for(int x=1;x<=n;++x) for(int y:adj[x])
         {
             e[y].push_back(x);
         }
         mark[s]=-1;
         dfs3(s);
         vector<int>lst;
         for(int x=t;x!=-1;x=mark[x]) lst.push_back(x);
         reverse(lst.begin(),lst.end());
         cout<<lst.size()<<endl;
         for(int x:lst) cout<<x<<" ";

}
