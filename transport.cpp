#include<bits/stdc++.h>
using namespace std;
int b[1000][10000],w[10000],v[1000],n,m,j;
void xuly()
{
      for(int i=1;i<=n;i++)
      {
           for(int j=0;j<=m;j++)
           {
               b[i][j]=b[i-1][j];
               if((v[i]<=j)&&(b[i][j]<b[i-1][j-v[i]]+v[i]))
                b[i][j]=b[i-1][j-v[i]]+v[i];
           }
      }
      cout<<b[n][m-1];
}
int main()
{
  //  freopen("transport.inp","r",stdin);
  //  freopen("transport.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>v[i];
   xuly();
}
