#include<bits/stdc++.h>
using namespace std;
long long x,n,i,s;
int main()
{
    freopen("tinh6.inp","r",stdin);
    freopen("tinh6.out","w",stdout);
    cin>>x>>n;
    for(i=0;i<=n;i++)
    s=s+pow(x,i);
    cout<<s;
}
