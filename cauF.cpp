#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> e[100011];
int mark[100011];
void dfs(int x)
{
   if(mark[x]++) return;
   for(int y:e[x]) dfs(y);
}
int main()
{
   cin>>n>>m;
   vector<int> X(m),Y(m),W(m);
   for(int i=0;i<m;i++)
   cin>>X[i]>>Y[i]>>W[i];
   int L=0,H=1e9,ans=-1;
   while(L<=H)
   {
      int M=L+H>>1;
      for(int i=1;i<=n;i++)
      {
         e[i].clear();
         mark[i]=0;
      }
      for(int i=0;i<m;i++)
      if(W[i]<=M)
      {
         e[X[i]].push_back(Y[i]);
         e[Y[i]].push_back(X[i]);
      }
      dfs(1);
      int fM=mark[n]!=0;
      if(fM)
      {
         ans=M;
         H=M-1;
      }
      else L=M+1;
   }
   cout<<ans;
}

