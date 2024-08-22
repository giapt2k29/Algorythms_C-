#include <bits/stdc++.h>
using namespace std;
long long n,m,k,x,y,a[5001][5001],q[1000001],f,l,c,d[1000001],p[1000001],t[1000001],kq;
int main()
{
    freopen("FLowers.inp","r",stdin);
    freopen("FLowers.out","w",stdout);
    cin>>n>>m>>k;
    while (m--) {cin>>x>>y; a[x][y]=1; a[y][x]=1;}
    f=1;
    l=1;
    q[1]=1;
    while (f<=l)
    {
        c=q[f];
        f++;
        for (int i=2;i<=n;i++)
        {
            if (a[c][i]&&!d[i])
            {
                l++;
                q[l]=i;
                d[i]=d[c]+1;
                t[i]=c;
            }
        }
        if (d[n]) break;
    }
    kq=k-d[n]+1;
    cout<<kq<<endl;
    int j=1; p[1]=n;
    while (t[n])
    {
        n=t[n];
        j++;
        p[j]=n;
    }
    for (int i=j;i>=1;i--) cout<<p[i]<<" ";
}
