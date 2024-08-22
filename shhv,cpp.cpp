#include<bits/stdc++.h>
using namespace std;
long long a[1001],i,kq;
int main()
{
	int x;
	while(cin>>x)
	{
		a[n++]=x
	}
	s=a[n];
	n=n-1;
	for(int i=1;i<=n;i++)
	{
	    gt[i]=gt[i-1]*i;
	    vt[i]=i;
	    kq=kq+(vt[a[i]-1])*gt[n-i];
	}
	cout<<kq<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(t+j*gt[n-i]>s)
			{
				l=j-1;
				break;
			}
		}
			t=t+l*gt[n-i];0
			a[i]=vt[l+1];
		  for(j=l+1;j<=n;j++)
			vt[j]=vt[j+1];
   }
      for(i=1i<=n;i++) cout<<a[i]<<" ";		
	}
