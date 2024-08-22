#include<bits/stdc++.h>
using namespace std;
long long n,x,i,d;
int main()
{
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        if((x/i<=n)&&(x%i==0))
        d++;
    }
    cout<<d;
}
