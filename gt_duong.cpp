#include<bits/stdc++.h>
using namespace std;
long long n,moc=-1,a[1000000],i;
int main()
{
    freopen("gt_duong.inp","r",stdin);
    freopen("gt_duong.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
       if(a[i]>=0) moc=i;
    }
    if(moc==-1) cout<<moc;
    else{
    cout<<a[moc]<<endl;
    cout<<moc;
    }
}
