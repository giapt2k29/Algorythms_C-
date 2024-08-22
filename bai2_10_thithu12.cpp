#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000],d[100000],i;
int main()
{
    freopen("bai2_10_thithu12.inp","r",stdin);
    freopen("bai2_10_thithu12.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        d[a[i]]=1;
    }
    for(i=1;i<n;i++)
    {
       if(a[i]==a[i+1]) d[a[i]]++;
    }
    sort(d+1,d+n+1,greater<int>());
    cout<<n-d[1];
}
