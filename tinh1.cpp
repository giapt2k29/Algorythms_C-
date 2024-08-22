#include<bits/stdc++.h>
using namespace std;
long long i,n,s=1;
int main()
{
    freopen("tinh1.inp","r",stdin);
    freopen("tinh1.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    s=s*i;
    cout<<s;
}
