#include<bits/stdc++.h>
using namespace std;
long long a,b,l,h,i;
int dem;
int main()
{
    freopen("bai1_10_2018_2019.inp","r",stdin);
    freopen("bai1_10_2018_2019.out","w",stdout);
     cin>>l>>h>>a>>b;
     for(i=l;i<=h;i++)
     {
         if((i%a==0)&&(i%b==0))
         dem++;
     }
     cout<<dem;
}
