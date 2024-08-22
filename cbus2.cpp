#include<bits/stdc++.h>
using namespace std;
int n,z,c[30][30],r[30],f[200005][20];
vector<int> s;
int getb(int x,int y) {
	return (x/r[y])%3;
}
int main() {
	cin>>n>>z;
	for (int i=0;i<=2*n;i++) {
		for (int j=0;j<=2*n;j++) {
			cin>>c[i][j];
		}
	}
	r[0]=1;
	for (int i=1;i<=n;i++) {
		r[i]=r[i-1]*3;
	}
	for (int i=0;i<r[n];i++) {
		for (int j=0;j<n;j++) {
			f[i][j]=1e9;
		}
	}
	for (int i=0;i<n;i++) {
		f[r[i]][i]=c[0][i+1];
	}
	for (int i=1;i<r[n];i++) {
		int e=0;
		for (int j=0;j<n;j++) {
			int u=getb(i,j);
			e+=(u==1);
			for (int k=0;k<n;k++) {
				if (getb(i,k)==1) {
					f[i+r[k]][k]=min(f[i+r[k]][k],f[i][j]+c[j+(u==2)*n+1][k+n+1]);
				}
			}
		}
		if (e<z) {
			for (int j=0;j<n;j++) {
				int u=getb(i,j);
				for (int k=0;k<n;k++) {
					if (getb(i,k)==0) {
						f[i+r[k]][k]=min(f[i+r[k]][k],f[i][j]+c[j+(u==2)*n+1][k+1]);
					}
				}
			}
		}
	}
	int ans=1e9;
	for (int i=0;i<n;i++) {
		ans=min(ans,f[r[n]-1][i]+c[n+i+1][0]);
	}
	cout<<ans;
}
