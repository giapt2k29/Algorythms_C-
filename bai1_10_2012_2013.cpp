#include<bits/stdc++.h>
using namespace std;
long long a,b,i,s,t,k,dem=0,r;
void tim(long long i)
{
     k=i;
     while(i!=0)
     {
        s=i%10;
        t=t*10+s;
        i=i/10;
     }
     while(t!=0)
     {
         r=k%t;
         k=t;
         t=r;
     }
     if(k==1) dem++;
}
int main()
{
    freopen("bai1_10_2012_2013.inp","r",stdin);
    freopen("bai1_10_2012_2013.out","w",stdout);
    cin>>a>>b;
    for(i=a;i<=b;i++)
    tim(i);
    cout<<dem;
}
