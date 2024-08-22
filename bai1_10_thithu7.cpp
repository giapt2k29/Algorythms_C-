#include<bits/stdc++.h>
using namespace std;
long long x,y,c,k,h;
int main()
{
    cin>>x>>y>>c;
    k=(x+y)/2;
    h=(2*x*y)/(x+y);
    if((h*h+k*k)>c*c) cout<<"No";
    else cout<<"Yes";
}
