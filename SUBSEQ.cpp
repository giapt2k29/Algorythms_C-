#include<bits/stdc++.h>
using namespace std;
long long a[10000000],i,n;
long long lis(long long a[],long long n )
{
    long long lis[n];
    lis[0] = 1;
    for (long long i=1;i<n;i++ )
    {
        lis[i]=1;
        for (long long j=0;j<i;j++)
            if (a[i]>a[j]&&lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
    }
}
int main()
{
    //freopen("subseq.inp","r",stdin);
    //freopen("subseq.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cout<<lis(a,n);
}
