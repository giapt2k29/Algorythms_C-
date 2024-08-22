#include<bits/stdc++.h>
using namespace std;
long long n,s,i;
int main()
{
    freopen("tinh4.inp","r",stdin);
    freopen("tinh4.out","w",stdout);
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
       if(i%2==0)
       s=s+i;
    }
    cout<<s;
}
