#include<bits/stdc++.h>
using namespace std;
long long n,a[10000001],i,min1=1e9;
int main()
{
    freopen("gtnn.inp","r",stdin);
    freopen("gtnn.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]<min1) min1=a[i];
    }
    cout<<min1<<endl;
    for(i=1;i<=n;i++)
    if(a[i]==min1) cout<<i<<" ";
}
