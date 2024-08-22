#include<bits/stdc++.h>
using namespace std;
int n,i;
long long s,t;
void xuli(int i)
{
   t=1;
    for(int j=1;j<=i;j++)
    {
       t=t*j;
    }
    s=s+t;
}
int main()
{
     cin>>n;
     for(i=1;i<=n;i++)
     xuli(i);
     cout<<s;
}
