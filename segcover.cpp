#include<bits/stdc++.h>
using namespace std;
struct ii
{
    int x,y;
};
ii a[1000001];
long long n,dem;
bool ss(const ii&a,const ii&b)
{
    if(a.x!=b.x)return(a.x<b.x);
    if(a.x==b.x)return(a.y<b.y);
}
int main()
{
    freopen("segcover.inp","r",stdin);
    freopen("segcover.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,ss);
    int j=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i].x<a[j].y) dem++;
        else j=i;
    }
    cout<<dem;
}
