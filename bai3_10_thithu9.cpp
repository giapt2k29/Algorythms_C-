#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000],b[1000000],i,k,max1;
int main()
{
    freopen("bai3_10_thithu9.inp","r",stdin);
    freopen("bai3_10_thithu9.out","ư",stdout);
        cin>>n;
    for(i=1;i<=n;i++)
         cin>>a[i];
    for(i=1;i<=n;i++)
       b[a[i]]++;
   for(i=1;i<=n;i++)
    {
        if(b[i]>max1)
           {
             max1=b[i];
             k=i;
        }
 }
       cout<<k<<" "<<max1;
}
