#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000],i,f[10000],kq;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for (int i=1; i<=n; i++) {
        f[i]=0;
        for (int j=i-1;j>=0;j--) if(a[i] > a[j])
        {
            f[i]=max(f[i],f[j]);
        }
        f[i]+=1;
        kq=max(kq, f[i]);
    }
    cout<<kq;
    return 0;
}
