#include<bits/stdc++.h>
using namespace std;
long long a[100000000],n,dem=0,i;
int main()
{
     freopen("bai2_10_2012_2013.inp","r",stdin);
     freopen("bai2_10_2012_2013.out","w",stdout);
     cin>>n;
     for(i=1;i<=n;i++)
     cin>>a[i];
     sort(a+1,a+n+1);
     if(a[1]>=1){ cout<<0;exit(0);}
     for(i=1;i<=n;i++)
     {
         if((a[i]+1)<a[i+1]){
         cout<<a[i]+1;
         exit(0);}
         if(a[i]+1==a[i+1]) dem++;
     }
     if(dem==n) cout<<a[n]+1;
}
