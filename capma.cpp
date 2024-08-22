#include <bits/stdc++.h>
using namespace std;
int a[100000],b[100000];
int i,s,n;
int main()
{
cin>>n;
for(i=1;i<=n;i++)
   cin>>a[i];
sort(a,a+n+1);
for(i=1;i<=n;i++)
{
    b[i]=a[i]-i+1;
}
s=1;
for(i=1;i<=n;i++)
{
    s=s*b[i];
}
cout<<s;
}
