#include<bits/stdc++.h>
using namespace std;
long long n,k,a[1000000],s,i,j,d;
int main()
{
    freopen("bai1_10.inp","r",stdin);
    freopen("bai1_10.out","w",stdout);
     cin>>n>>k;
     for(i=1;i<=n;i++)
        cin>>a[i];
     for(i=1;i<=n;i++)
     {
         s=0;
         for(j=i;j<=n;j++)
         {
             s=s+a[j];
             if(s==k) {cout<<"YES";d++;break;}
         }
     }
     if(d==0) cout<<"NO";
}
