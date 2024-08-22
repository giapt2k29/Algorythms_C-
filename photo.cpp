#include<bits/stdc++.h>
#define ii pair<int,int>
#define x first
#define y second
using namespace std;
ii c[100000];
long long n,d,a,b,x[100000],y[100000],dem,j,i,s,k[100000],m=1;
int main()
{
    freopen("photo.inp","r",stdin);
    freopen("photo.out","w",stdout);
    cin>>n>>d>>a>>b;
    for(i=1;i<=n;i++)
        cin>>x[i]>>y[i];
    for(j=1;j<=n;j++)
    {
        c[j].x=a*x[j]+b*y[j];
        c[j].y=j;
    }
    sort(c+1,c+n+1);
    for(i=1;i<=n;i++)
    {
       s=s+c[i].x;
       if(s<=d)
       {
           dem++;
           k[m]=c[i].y;
           m++;
       }
    }
    cout<<dem<<endl;
    for(i=m-1;i>=1;i--)
        cout<<k[i]<<" ";
}
