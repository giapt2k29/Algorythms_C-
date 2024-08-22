#include<bits/stdc++.h>
using namespace std;
long long n,i,tong;
int main()
{
    freopen("shh.inp","r",stdin);
    freopen("shh.out","w",stdout);
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
       if(n%i==0) tong=tong+i;
    }
    if(tong==n) cout<<"YES";
    else cout<<"NO";
}
