#include<bits/stdc++.h>
using namespace std;
long long n,i,t;
int main()
{
    freopen("tinh3.inp","r",stdin);
    freopen("tinh3.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    t=t+i*i;
    cout<<t;
}
