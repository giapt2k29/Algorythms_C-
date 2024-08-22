#include<bits/stdc++.h>
using namespace std;
long long a[1001],kq=1,n,x,l,gt[1001],vt[1001],s;
int main()
{
	//freopen("shhv.inp","r",stdin);
	//freopen("shhv.out","w",stdout);
	cin>>n>>k>>s;
	s-+
    n=n-1;
    gt[0]=1;
	for(int i=1;i<=n;i++)
	{
	    gt[i]=gt[i-1]*i;
	}
	for(int i=1;i<=12;i++)
	    vt[i]=i;
    for(int i=1;i<=n;i++)
    {
	    kq=kq+(vt[a[i]]-1)*gt[n-i];
	    for(int j=a[i]+1;j<=n;j++)
	        vt[j]--;
    }
    cout<<kq<<endl;
     for (int i=1;i<=n;i++) vt[i] = i;
	int t=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			if(t+j*gt[n-i]>s)
			{
				l=j-1;
				break;
			}
			t=t+l*gt[n-i];
			a[i]=vt[l+1];
		  for(int j=l+1;j<=n;j++)
			vt[j]=vt[j+1];
   }
      for(int i=1;i<=n;i++) cout<<a[i]<<" ";
}

