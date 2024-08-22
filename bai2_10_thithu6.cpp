#include<bits/stdc++.h>
using namespace std;
long long n,a[10000],b[10000],max1,dem,i,h,s,k,m;
int main()
{
    freopen("bai2_10_thithu6.inp","r",stdin);
    freopen("bai2_10_thithu6.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i]>>b[i];
    for(k=1;k<=1000;k++)
    {
        dem=0;
        for(i=1;i<=n;i++)
        {
           if((k<=b[i])&&(k>=a[i]))
           dem++;
           m=dem;
        }
        if(m>max1)
        {
            max1=m;
            h=k;
        }
    }
    cout<<h;
}
