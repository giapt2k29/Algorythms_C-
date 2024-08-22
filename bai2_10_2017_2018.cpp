#include<bits/stdc++.h>
using namespace std;
long long n,i;
int main()
{
    freopen("bai2_10_2017_2018.inp","r",stdin);
    freopen("bai2_10_2017_2018.out","w",stdout);
     cin>>n;
     i=2;
     while(i*2<=n)
     {
          i=i*2;
     }
     if(n-(i/2)*3>0) cout<<n-(i/2)*3;
     else cout<<n-i;
}
