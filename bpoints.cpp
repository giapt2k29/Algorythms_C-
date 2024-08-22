#include<bits/stdc++.h>
using namespace std;
long long n,h,a[10000000],b[1000000],i,dem,j=1;
int main()
{
    freopen("bpoints.inp","r",stdin);
    freopen("bpoints.out","w",stdout);
     cin>>n>>h;
     for(i=1;i<=n;i++)
         cin>>a[i];
     for(i=1;i<=h;i++)
         cin>>b[i];
         i=1;
     while(i<=n)
     {
         if(a[i]>b[j])
         {
             dem++;
         }
         if(j<=h)
             {
                 j++;
             }
        if(j>h)
        {
            j=1;
            i++;
        }
    }
     cout<<dem;
}
