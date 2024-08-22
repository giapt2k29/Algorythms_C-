#include<bits/stdc++.h>
using namespace std;
long long a,b,t,m,min1=1e9,max1;
long long gcd(long long i,long long j)
{
	while(i*j!=0)
	{
		if(i>j)
		{
			i%=j;
		}
		else j%=i;
	}
	return i+j;
}
long long lcm(long long m,long long n)
{
	return (m*n)/gcd(m,n);
}
int main()
{
	freopen("ucbc.inp","r",stdin);
	freopen("ucbc.out","w",stdout);
	cin>>a>>b;
	t=a;
	m=a;
	for(long long i=a+1;i<=b;i++)
	{
		t=gcd(t,i);
		m=lcm(m,i);
	}
	cout<<t<<endl;
	cout<<m;
}