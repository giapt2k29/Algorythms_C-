#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100011];
int mark[1000011];
void dfs(int x)
{
    if(mark[x]++) return;
    for(int y:adj[x]) dfs(y);
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
    }
    int ans=0;
    for(int x=1;x<=n;x++)
        if(!mark[x])
         {
           ++ans;
           dfs(x);
         }
         cout<<ans;
}
