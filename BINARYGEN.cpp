#include<bits/stdc++.h>
using namespace std;
int n,a[10],k,dem,t,s[10000],c=1;
void out()
{
    for(i=1;i<=n;i++)
    {

    }
}
void xuli(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n) out();
        else xuli(i+1);
    }
}
int main()
{
   cin>>n>>k;
    while(k!=0)
    {
      s[c]=k%10;
      k=k/10;
      c++;
    }
   xuli(1);
}

