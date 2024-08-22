#include<bits/stdc++.h>
using namespace std;
long long n,a[100000000],i,h=99999999;
int main()
{
    //freopen("bai2_10_thithu10.inp","r",stdin);
    //freopen("bai2_10_thithu10.out","w",stdout);
      cin>>n;
      for(i=1;i<=n;i++)
          cin>>a[i];
      sort(a+1,a+n+1,greater<int>());
      for(i=1;i<=n;i++)
      {
          h=min(h,i+a[i]);
      }
      cout<<h;
}
