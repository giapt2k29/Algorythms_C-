#include <bits/stdc++.h>
using namespace std;
long long a,b,c,min1,max1,p,t,t1;
long long ucln(long long x,long long y)
{
    if(y==0) return x;
    return ucln(y,x%y);
}
long long bcnn(long long x,long long y)
{
    long long t=ucln(x,y);
    return (x/t)*y;
}
int main()
{
    freopen("findmul.inp","r",stdin);
    freopen("findmul.out","w",stdout);
    cin>>a>>b>>c;
    max1=max(a,b);
    min1=min(a,b);
    t=bcnn(max1,min1);
    t1=t/max1+t/min1-1;
    if(t1<=c)
         {t1=c/t1;}
    else {t1=0;}
    if(max1%min1==0) p=max1/min1;
    else p=max1/min1+1;
    if(c%p==0) cout<<max1*(c/p);
    else
    {
        cout<<min1*(c-c/p+t1);
    }
}
