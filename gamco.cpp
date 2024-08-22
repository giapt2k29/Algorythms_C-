#include <bits/stdc++.h>
using namespace std;
    int m,n;
    char c[105][105];
    int d[105][105];
    queue < pair <int,int> > q;
    const int dx[4]={-1,0,0,1};
    const int dy[4]={0,1,-1,0};
int main()
{
    //freopen("test.inp","r",stdin);
    cin>>m>>n;
    int m1,n1,m2,n2;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            d[i][j]=0;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            cin>>c[i][j];
            if(c[i][j]=='C')
            {
                m1=i;
                n1=j;
            }
            if(c[i][j]=='B')
            {
                m2=i;
                n2=j;
            }
        }
    q.push(make_pair(m1,n1));
    pair <int,int> x;
    while(!q.empty()&&d[m2][n2]==0)
    {
        x=q.front();
        q.pop();
        int i,j;
        for(int t=0;t<4;t++)
        {
            i=x.first+dx[t];
            j=x.second+dy[t];
            if(i>0&&i<=m&&j>0&&j<=n&&d[i][j]==0&&c[i][j]!='*')
            {
                d[i][j]=d[x.first][x.second]+1;
                q.push(make_pair(i,j));
            }
        }
    }
    if(d[m2][n2]==0) d[m2][n2]=-1;
    cout<<d[m2][n2];
}
