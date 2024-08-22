#include<bits/stdc++.h>
using namespace std;
long long m,n,t=1,h,dem,moc;
long long powe(long long u,long long v)
{
    for(long long i=1;i<=v;i++)
    t*=u;
    return t;
}
int main()
{
    freopen("nprefix.inp","r",stdin);
    freopen("nprefix.out","w",stdout);
    cin>>m>>n;
    h=m;
    while(m!=0)
    {
        dem++;
        m/=10;
    }
    t=powe(10,dem);
    while(n--)
    {
        if((n-h)%t==0) break;   
        moc=n;
    }
    cout<<(moc-h)/t+1;
}
