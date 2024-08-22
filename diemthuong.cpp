#include<bits/stdc++.h>
using namespace std;
long long m,n,a[100000000],b[100000000],i,j,kq=0;
void xuli()
{
    i=1;j=1;
    for(i=1;i<=n;i++)
    {
        while((a[i]>b[j])&&(m>=j))
                j++;
                kq=kq+j-1;
    }
}
int main()
{
    freopen("marka.inp","r",stdin);
    freopen("marka.out","w",stdout);
   cin>>n>>m;
   for(i=1;i<=n;i++)
     cin>>a[i];
   for(i=1;i<=m;i++)
      cin>>b[i];
    xuli();
    cout<<kq;
}
