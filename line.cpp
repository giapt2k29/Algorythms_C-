#include<bits/stdc++.h>
using namespace std;
long long n,t,k,mx;
struct ii
{
    int x,y;
};
ii a[1000001];
bool ss(const ii&a,const ii&b)
{
    return(a.y<b.y);
}
int main()
{
    freopen("line.inp","r",stdin);
    freopen("line.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,ss);
    k=a[1].x;
    for(int i=2;i<=n;i++)
    {
        if(a[i].x<=a[i-1].y) {t=a[i].y-k;}
        else {mx=max(t,mx);k=a[i].x;}
    }
    mx=max(t,mx);
    cout<<mx;
}
