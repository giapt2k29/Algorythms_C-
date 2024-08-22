#include<bits/stdc++.h>
using namespace std;
long long x;
void chuyenHe(int x)
{
		long long m,p,c;
		char d[1000000];
		long long a=x;
		while (a!=0)
		{
			int c=a%16;
			if (c<=9)
				d[p++]=c+48;
			else if (c==10)
				d[p++]='A';
			else if (c==11)
				d[p++]='B';
			else if (c==12)
				d[p++]='C';
			else if (c==13)
				d[p++]='D';
			else if (c==14)
				d[p++]='E';
			else if (c==15)
				d[p++]='F';
			m++;
			a/=16;
		}
		for (int i=m-1;i>=0;i--)
		{
			cout<<d[i];
	}
}
int main()
{
	cin>>x;
	chuyenHe(x);
	return 0;
}
