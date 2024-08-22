#include<bits/stdc++.h>
using namespace std;
long long n,i,dem,m,h;
void xuli(long long i)
{
    freopen("bai2_10_thithu10.inp","r",stdin);
    freopen("bai2_10_thithu10.out","w",stdout);
     h=5-i%5;
     dem=dem+(m-h)/5+1;
}
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    xuli(i);
    cout<<dem;
}
