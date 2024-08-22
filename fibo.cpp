#include<bits/stdc++.h>
using namespace std;
long long n,f1=1,f2=1,t=2,h;
int main()
{
    cin>>n;
    if(n<=2)
    {
        cout<<1<<endl;
        cout<<1*n;
    }
    else
    {
        for(long long i=3;i<=n;i++)
        {
            h=f2;
            f2=f1+f2;
            swap(h,f1);
            t+=f2;
        }
    }
    cout<<f2<<endl;
    cout<<t;
}