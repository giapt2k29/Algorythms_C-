#include <bits/stdc++.h>
using namespace std;
int a[1000][1000],dem=1,n,m,md=0,tong;
void xuly(int i, int j)
{
    if(a[i][j+1]==0)
    {
        a[i][j+1]=1;
        dem++;
        xuly(i,j+1);
    }
    if(a[i+1][j]==0)
    {
        a[i+1][j]=1;
        dem++;
        xuly(i+1,j);
    }

}
int main()
{
    //freopen("region.inp","r",stdin);
   // freopen("region.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0) tong++;
        }
    }
    for(int i=1;i<=m;i++)
        if(a[1][i]==0) tong--;
    for(int i=1;i<=n+1;i++)
    {
        a[i][m+1]=1;
        a[i][0]=1;
    }
    for(int j=1;j<=m;j++)
    {
        a[n+1][j]=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==0)
            {
                a[i][j]=1;xuly(i,j);
                if(dem>md) md=dem;
                dem=1;
            }
        }
    }
    cout<<tong-md;
}
