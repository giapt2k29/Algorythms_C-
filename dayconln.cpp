#include<bits/stdc++.h>
using namespace std;
long long n,s,max1,i,a[1000000];
int main()
{
   cin>>n;
   for(i=1;i<=n;i++)
   {
      cin>>a[i];
      s=s+a[i];
      if(s<0) {s=0;}
      if(s>max1) max1=s;
   }
   cout<<max1;
}
