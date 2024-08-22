#include<bits/stdc++.h>
using namespace std;
long long n,m,tong,i,a[100000],dem;
int xuli(int m)
{
    long long k;
    for(k=900;k>=1;k--)
    {
         tong=m-k;
         n=tong;
         while(n!=0)
         {
             tong=tong+(n%10);
             n=n/10;
         }
         if(tong==m) {cout<<m-k;dem++;}
    }
    return 0;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++){
    xuli(a[i]);}
}
