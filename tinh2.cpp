#include<bits/stdc++.h>
using namespace std;
long long n,s,t,i,j;
long long giaithua(int m)
{
   s=1;
   for(j=1;j<=m;j++)
   s=s*i;
}
int main()
{
    freopen("tinh2.inp","r",stdin);
    freopen("tinh2.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    t=t+giaithua(i);
    cout<<t;
}
