#include<bits/stdc++.h>
using namespace std;
long long t,n,k,m,h,l,i,j;
void xuli(long long n,long long k,long long m)
{
	h=1;l=1;
	for(i=1;i<=n;i++)
	{
		h=h*i;
	}
	for(i=1;i<=n-k;i++)
	{
		l=l*i;
	}
	cout<<(h/l)%m<<endl;
}
int main()
{
	//freopen("cnk.inp","r",stdin);
  //	freopen("cnk.out","w",stdout);
	cin>>t;
	for(j=1;j<=t;j++)
	{
		cin>>n>>k>>m;
		xuli(n,k,m);
	}
}

