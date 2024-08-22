#include<bits/stdc++.h>
using namespace std;
long long m,n,a[1000000];
void xuli(long long l,long long h)
{
    long long i,j,k,t;
    if(l>=h) {exit(0);}
    i=1;j=h;k=a[(l+h)/2];
    do
    {
        while(a[i]>k) i++;
        while(a[j]<k) j--;
        if(i<=j)
        {
            if(i<j)
            {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
            i++;j--;
        }
    }
    while(i<=j);
    xuli(l,j);
    xuli(i,h);
}
void xuat()
{
    long long s=1,i;
        a[0]=0;
    for(i=1;i<=n;i++)
    {
        s=s+a[i];
        if(s>=m)
        {
           cout<<i;
           exit(0);
        }
        s--;
    }
    cout<<-1;
}
int main()
{
    freopen("bai3_10_thithu11.inp","r",stdin);
    freopen("bai3_10_thithu11.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++)
    cin>>a[i];
    xuli(1,n);
    xuat;
}
