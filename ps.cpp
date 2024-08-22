#include<bits/stdc++.h>
using namespace std;
long long a,b,i,max1;
int main()
{
    freopen("ps.inp","r",stdin);
    freopen("ps.out","w",stdout);
	cin>>a>>b;
	if(a>b) max1=a;
	else max1=b;
	for(i=(int)(max1/2);i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
		cout<<a/i<<" "<<b/i;
		exit(0);
		}
	}
}
