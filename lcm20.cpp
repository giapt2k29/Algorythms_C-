#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d,h,k;
long long xuli(long long m,long long n)
{
    long long bcnn,max1;
     if(m>n)
       {
            max1=m;
       }
        else
        {
            max1=n;
        }
        long long i=max1;
        while(1<2)
        {
        if(i%m==0&&i%n==0)
            {
                bcnn=i;
                break;
            }
            i=i+max1;
        }
return bcnn;
}
int main()
{
    freopen("lcm20.inp","r",stdin);
    freopen("lcm20.out","w",stdout);
    cin>>a>>b>>c>>d;
    h=xuli(a,b);
    k=xuli(c,d);
    cout<<xuli(h,k);
}
