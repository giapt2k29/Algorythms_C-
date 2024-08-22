#include<bits/stdc++.h>
using namespace std;
struct ii
{
    int x,y;
};
ii a[100000],kq[100001];
long long t[10001],l[10001],n;
bool ss(const ii&m,ii&n)
{
    return (m.y<n.y);
}
void doc()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,ss);
}
void xuli()
{
    for(int i=1;i<=n;i++)
    {
        l[i]=1;
        for(int i=1;i<=i-1;i++)
        {
            if((a[j].y<=a[i].x)&&(l[i]<l[j]+1))
            {
                l[i]=l[j]+1;
                t[i]=j;
            }
        }
    }
    int res=L[1];cs=1;
    for(int i=2;i<=n;i++)
    {
        if(L[i]>res) {res=L[i]; cs=i;}
    }
    cout<<res<<endl;
    int j=res;
    do {kq[j]=a[cs]; cs=T[cs];j--;}
    while(j!=0);
    for(int i=1;i<=res;i++) {cout<<kq[i].x<<" "<<kq[i].y<<endl;}
}
int main()
{
    doc();
    xuli();
}
