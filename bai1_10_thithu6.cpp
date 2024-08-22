#include<bits/stdc++.h>
using namespace std;
long long n,a[10000000],i,j,s,max1,dem;
int main()
{
   cin>>n;
   for(i=1;i<=n;i++)
   cin>>a[i];
   for(i=1;i<=n;i++)
   {
       s=0;
      for(j=i;j<=n;j++)
      {
         s=s+a[j];
         dem++;
         if(dem>=4)
         {
             if(s>max1)
               {
                 max1=s;
               }
         }
    }
   }
   cout<<max1;
}
