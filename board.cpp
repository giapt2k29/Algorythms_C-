#include<bits/stdc++.h>
using namespace std;
long long m,n,s;
int main()
{
     cin>>n>>m;
     s=pow(2,(n-1)*(m-1));
     cout<<s%1000000007;
}
