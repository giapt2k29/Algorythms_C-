#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main()
{
//	freopen("bai1.inp","r",stdin);
//	freopen("bai1.out","w",stdout);
	cin>>n;
	while(n!=0)
	{
		n=n/3;
		k++;
	}
	cout<<k;
}
