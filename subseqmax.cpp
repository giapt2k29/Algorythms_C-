#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int n;
	cin>>n;
	int SDuong=0;
	int amMax=-100005;
	int Ai;
	int S=0, S_tmp=0;
	int ktd=0, kta=0;
	for (int i=1; i<=n; i++)
	{
		cin>>Ai;
		S_tmp+=Ai;
		if (S_tmp<0) S_tmp=0;
		else S=max(S, S_tmp);
		if (Ai>=0)
		{
			SDuong+=Ai;
			ktd=1;
		}
		else
		{
			if (Ai>amMax) amMax=Ai;
			kta=1;
		}
	}
	if (ktd==0) cout<<amMax<<" "<<amMax;
	else if (kta==0) cout<<SDuong;
	else cout<<S;

	return 0;
}
