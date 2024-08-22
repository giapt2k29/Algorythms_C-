#include<bits/stdc++.h>
using namespace std;
long long i,n,s=0;
int main ()
{
    freopen("bai3_10_2015_2016.inp","r",stdin);
    freopen("bai3_10_2015_2016.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    s+=pow(i,2);
    cout<<s;
}
