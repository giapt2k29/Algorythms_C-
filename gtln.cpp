#include<bits/stdc++.h>
using namespace std;
long long n,a[10000001],i,max1;
int main()
{
    freopen("gtln.inp","r",stdin);
    freopen("gtln.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]>max1) max1=a[i];
    }
    cout<<max1<<endl;
    for(i=1;i<=n;i++)
    if(a[i]==max1) cout<<i<<" ";
}
