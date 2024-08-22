#include<bits/stdc++.h>
using namespace std;
struct ii
{
    int x,y;
};
int n,L[1002],T[1002],cs;
long long tong;
ii a[100000],kq[10002];
bool ss(const ii&a,const ii&b)
{
    return (a.y<b.y);
}
void doc()
{
  //  freopen("hop.inp","r",stdin);
  //  freopen("hop.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x>>a[i].y;
    }
    sort(a+1,a+n+1,ss);
}
void xuly()
{
    for(int i=1;i<=n;i++)
    {
        L[i]=1;
        for(int j=1;j<=i-1;j++)
        {
            if((a[j].y<a[i].x)&&(L[i]<L[j]+1))
            {
                L[i]=L[j]+1;
                T[i]=j;
            }
        }
    }
}
void inkq()
{
    int res=L[1];cs=1;
    for(int i=2;i<=n;i++)
    {
        if(L[i]>res) {res=L[i]; cs=i;}
    }
    int j=res;
    do {kq[j]=a[cs]; cs=T[cs];j--;}
    while(j!=0);
    for(int i=1;i<=res;i++) tong=tong+kq[i].y-kq[i].x;
    if(tong==0) cout<<"-1";
    else cout<<tong;
}
int main()
{
    doc();
    xuly();
    inkq();
}
