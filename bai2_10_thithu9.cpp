#include<bits/stdc++.h>
      using namespace std;
      long long n,a[1000000],I,k,dem,s,i;
int main()
 {
     freopen("bai2_10_thithu9.inp","r",stdin);
    freopen("bai2_10_thithu9.out","ư",stdout);
        cin>>n;
          i=1;
      while(n>0)
        {
              a[i]=n%10;
              n=n/10;
              i++;
      }
for(k=1;k<i;k++)
{
     s=s+a[k];
     if(a[k]==0) dem++;
}
if((dem==0)||(s%3!=0))
{
     cout<<-1;
     exit(0);
}
if((dem!=0)&&(s%3==0))
{
      sort(a+1,a+i+1);
}
for(k=i;k>1;k--)
cout<<a[k];
}
