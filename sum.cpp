#include <bits/stdc++.h>
using namespace std;
long long n,k,b,tong;
long long a[100000];
int main()
{
    freopen("sum.inp","r",stdin);
    freopen("sum.out","w",stdout);
    cin>>n>>k>>b;
    b=b%n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=0;i<=k-1;i++)
    {
        if((b+i)%n==0)
        tong+=a[n];
        else tong+=a[(b+i)%n];
    }
    cout<<tong;
}
