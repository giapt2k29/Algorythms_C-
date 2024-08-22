#include<bits/stdc++.h>
using namespace std;
long long n,k,a[10000000],b[10000000],s,i;
int main()
{
    freopen("langhoa.inp","r",stdin);
    freopen("langhoa.out","w",stdout);
    cin>>n>>k;
    for(long long i=1;i<=n;i++)
    cin>>a[i];
    for(long long i=1;i<=n;i++)
    cin>>b[i];
    i=n;
    while(i>0&&(a[i]==0||b[i]==0))
    i--;
    for(long long j=i;j>=1;j--)
    {
        if(b[j]==1) a[j]=1;
    }
    for(long long i=1;i<=k;i++)
    {
        cin>>s;
        cout<<a[s]<<" ";
    }
}