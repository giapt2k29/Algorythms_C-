#include<bits/stdc++.h>
using namespace std;
long long n,a[10000000],d,b,c,max1,e;
int main()
{
    freopen("twovals.inp","r",stdin);
    freopen("twovals.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<=n;i++)
    {
        if(a[i]!=d&&a[i]!=b)
        {
            d=a[i];
            c=i;
            swap(d,b);
            swap(c,e);
            max1=max(max1,e-c+1);
        }
    }
    cout<<max1;
}