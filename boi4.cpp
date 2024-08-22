#include <bits/stdc++.h>
using namespace std;
string s;
long long n,dem;
int c;
int main()
{
    freopen("boi4.inp","r",stdin);
    freopen("boi4.out","w",stdout);
    cin>>s;
    n=s.length();
    s=" "+s;
    for(int i=1;i<=n;i++) {if((s[i]-48)%4==0) dem++;}
    cout<<dem<<endl;
    for(int i=1;i<=n-1;i++)
    {
        c=0;
        c=(s[i]-48)*10+(s[i+1]-48);
        if(c%4==0) dem=dem+i;
    }
    cout<<dem;
}
