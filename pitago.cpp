#include<bits/stdc++.h>
using namespace std;
long long n,i,j,a[100001],c[10000000],k,dem,l[10001][10001];
long long scp(int x)
{
    if(int(sqrt(x))==sqrt(x))
        return 1;
    else return 0;
}
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(i=n;i>=2;i--)
    {
        for(j=n-1;j>=1;j--)
        {
            if(scp(a[i]*a[i]-a[j]*a[j])==1)
            {
                k++;
                c[k]=sqrt(a[i]*a[i]-a[j]*a[j]);
                l[a[j]][c[k]]=1;
                l[c[k]][a[j]]=1;
            }
        }
    }
    for(i=1;i<n;i++)
    for(j=i+1;j<=n;j++)
   {
       if((l[a[j]][a[i]]==1)&&(l[a[i]][a[j]]==1))
        dem++;
   }
    cout<<dem;
}
