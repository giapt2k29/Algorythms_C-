#include<bits/stdc++.h>
using namespace std;
long long n,m,k,kq,i,s=1,h;
int main()
{
   // freopen("timk.inp","r",stdin);
    //freopen("timk.out","w",stdout);
      cin>>n>>m;
    for(i=1;i<=n;i++)
        s=s*i;
       while(s>0)
      {
       s=s/m;
       kq++;
       if(s%m!=0)
       {
           cout<<kq;
           break;
       }
      }
}
