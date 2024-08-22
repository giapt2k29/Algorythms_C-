#include <bits/stdc++.h>
using namespace std;
long long n,gt=1,i=1,j=1,s;
int main()
{
    freopen("bai1_10_2015_2016.inp","r",stdin);
    freopen("bai1_10_2015_2016.out","w",stdout);
      cin>>n;
      for(i=1; i<=n; i++){
            gt=gt*i;
            s=s+gt;
      }
      cout<<s;
}
