#include<bits/stdc++.h>
using namespace std;
long double l,r;
long long m,n,t;
int main()
{
    freopen("uocsole.inp","r",stdin);
    freopen("uocsole.out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        m=floor(sqrt(r));
        n=ceil(sqrt(l));
        cout<<m-n+1<<endl;
    }
}