#include<bits/stdc++.h>
using namespace std;
long long c[1001][1001],m,n,i,j;
void xuli()
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            c[i][j]+=max(c[i][j-1],c[i-1][j]);
    }
}
int main()
{
    freopen("maxsume.inp","r",stdin);
    freopen("maxsume.out","w",stdout);
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>c[i][j];
            if(c[i][j]%2!=0) c[i][j]=0;
        }
    }
    xuli();
    cout<<c[m][n];
}
