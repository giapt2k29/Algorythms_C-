#include<bits/stdc++.h>
using namespace std;
long long n,moc=-1,a[1000000],i;
int main()
{
    freopen("gt_chan.inp","r",stdin);
    freopen("gt_chan.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    for(i=n;i>=1;i--)
        if((a[i]%2==0)&&(a[i]>=0))
        moc=i;
    if(moc==-1) cout<<moc;
    else{
    cout<<a[moc]<<endl;
    cout<<moc;
    }
}
