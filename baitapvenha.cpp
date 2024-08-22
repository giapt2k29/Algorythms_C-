#include<bits/stdc++.h>
using namespace std;
long long a[1000000],n,k,moc,i;
int main()
{
	freopen("bai2.inp","r",stdin);
	freopen("bai2.out","w",stdout);
	cin>>n>>k;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++)
	{
		if(k>=a[i])
		{
			moc=i;
		}
	}
	for(i=1;i<=moc;i++)
	{
	cout<<a[i]<<" ";
    }
	cout<<k<<" ";
	for(i=moc+1;i<=n;i++)
	cout<<a[i]<<" ";
}
