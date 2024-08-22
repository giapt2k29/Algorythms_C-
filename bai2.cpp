#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000],i=1,k;
int main()
{
    cin>>n;
    while(n!=0)
    {
       a[i]=n-(n/16)*16;
       n=n/16;
       i++;
    }
    for(k=i-1;k>=1;k--)
    {
        if(a[k]==10) cout<<"A";
        if(a[k]==11) cout<<"B";
        if(a[k]==12) cout<<"C";
        if(a[k]==13) cout<<"D";
        if(a[k]==14) cout<<"E";
        if(a[k]==15) cout<<"F";
        if(a[k]<10) cout<<a[k];
    }

}
