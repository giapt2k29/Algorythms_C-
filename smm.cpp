#include<bits/stdc++.h>
using namespace std;
long long n,a[100000],b[10000],c[10000],k=1,dem=0,max1,i;
int main()
{
    freopen("smm.inp","r",stdin);
    freopen("smm.out","w",stdout);
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
        }
    }
    for(i=1;i<=n;i++)
    {
         if(b[i]==max1)
         {
             c[k]=i;
             k++;
             dem++;
         }
    }
    cout<<dem<<endl;
    for(i=1;i<k;i++)
        cout<<c[i]<<endl;
    cout<<max1;
}
