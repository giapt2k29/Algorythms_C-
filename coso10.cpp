#include<bits/stdc++.h>
using namespace std;
long long x;
long long xuli(long long x)
{
    long long p=0,d=0;
    while(x>0)
    {
        d=d+(x%10)*pow(2,p);
        p++;
        x=x/10;
    }
    return d;
}

int main()
{
    freopen("coso10.inp","r",stdin);
    freopen("coso10.out","w",stdout);
    long long binaryNumber;
    cin>>x;
    cout<<xuli(x);
}
