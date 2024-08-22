#include<bits/stdc++.h>
using namespace std;
long long d,n,i=1,sum=0;
int main()
{
    freopen("coso2.inp","r",stdin);
    freopen("coso2.out","w",stdout);
    cin>>n;
    while(n>0)
    {
        d=n%2;
        sum=sum+(i*d);
        n=n/2;
        i=i*10;
    }
    cout<<sum;
    return 0;
}
