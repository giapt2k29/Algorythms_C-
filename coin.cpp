#include<bits/stdc++.h>
using namespace std;
long long n,k,max1,dem,j,i;
string s;
int main()
{
   cin>>n>>k;
   for(i=0;i<n;i++)
   cin>>s[i];
   for(i=0;i<n;i++)
   {
      dem=0;
      for(j=i;j<n;j++)
      {
          if(s[j]=='R')
          dem++;
          if((j-i+1>max1)&&(dem*(k+1)==(j-i+1)))
          max1=j-i+1;
      }
   }
   cout<<max1;
}
