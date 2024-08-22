#include<bits/stdc++.h>
using namespace std;
long long n,c,k,a[1000],i,dem,s;
int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];
    while(dem!=n)
    {
      dem=0;
      c++;
      s=pow(c,k);
       for(i=1;i<=n;i++)
       {
        if(s%a[i]==0)
        dem++;
       }
       i=1;
    }
    cout<<c;
}
