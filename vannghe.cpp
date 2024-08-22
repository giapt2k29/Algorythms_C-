#include<bits/stdc++.h>
using namespace std;
long long m,n,t;
int main()
{
	freopen("vannghe.inp","r",stdin);
	freopen("vannghe.out","w",stdout);
	cin>>m>>n;
	t=std::__gcd(m,n);
	cout<<t<<endl;
	cout<<m/t<<" "<<n/t;
}