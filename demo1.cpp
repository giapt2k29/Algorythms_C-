#include<bits/stdc++.h>
using namespace std;
long long n,i,j,m,h,k,t,a[1000000],x;
int main()
{
    cin>>n;
    for(long long x=1;x<=n;x++)
    {
        cin>>i>>j>>h>>k;
        a[x]=i+j+k+h;
    }
    t=a[1];
    sort(a+1,a+n+1,greater<>());
    for(long long x=1;x<=n;x++)
    {
        if(a[x]==t)
        {
            cout<<x;
            exit(0);
        }
    }
}
