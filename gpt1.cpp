#include<bits/stdc++.h>
using namespace std;
long long a,b;
float x;
int main()
{
    freopen("gpt1.inp","r",stdin);
    freopen("gpt1.out","w",stdout);
     cin>>a>>b;
     if((a==0)&&(b!=0)) cout<<"VN";
     if((a==0)&&(b==0)) cout<<"VSN";
     if(a!=0) x=-b/a;
     cout<<setprecision(4)<<fixed<<x;
}
