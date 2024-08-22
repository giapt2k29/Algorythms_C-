#include<bits/stdc++.h>
using namespace std;
struct ii
{
   int x,y;
};
ii a[1001];
int n,A,m,dem,k,c[1000],h;
bool ss(const ii&u,ii&v)
{
    return (u.y<v.y);
    if(u.y==v.y) return (u.x>v.x);
}
int main()
{
    cin>>n>>A;
    for(int i=1;i<=n;i++)
        cin>>a[i].x>>a[i].y;
    sort(a+1,a+n+1,ss);
    for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                if(((a[j].x-a[i].x)*a[i].y>A)&&(a[i].y==a[j].y))
                {
                    dem++;
                    i=j;
                }
                if((a[j].x-a[i].x)*a[i].y<A&&(a[j].y!=a[j+1].y)) {dem++;i=j+1;}
            }
        }
        cout<<dem;
}
