#include<bits/stdc++.h>
using namespace std;
int kq,c[100][100],n,k,dd[100];
void duyet(int i,int x,int tong,int sl)
{
   if(i>2*n)
   {
       kq=min(kq,tong+c[x][0]);
       return;
   }
   for(int y=1;y<=2*n;y++)
   {
	   int ok=true;
	   if(dd[y]) ok=false;
	   if(y<=n)
	   {
		   if(sl>=k) ok=false;
	   }
		else{
		    if(!dd[y-n]) ok=false;
			}
	   if(tong+c[x][y]>=kq) ok=false;
	   if(ok){
	      dd[y]=1;
	      duyet(i+1,y,tong+c[x][y],sl+(y<=n?1:-1));
	      dd[y]=0;
	   }
   }
}
int main(int argc,char const*argv[])
{
	cin>>n>>k;
	for(int i=0;i<=2*n;i++)
	for(int j=0;j<=2*n;j++)
	cin>>c[i][j];
	kq=999999999;
	duyet(1,0,0,0);
	cout<<kq;
	return 0;
}
