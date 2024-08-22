#include<bits/stdc++.h>
using namespace std;
long long n,i,s,a[100000000];
int main()
{
   freopen("bai1_10_2017_2018.inp","r",stdin);
   freopen("bai1_10_2017_2018.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
            {
              if(a[i]>0) s=s+a[i];
            }
    cout<<s*2;
}
