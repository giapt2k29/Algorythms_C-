#include<bits/stdc++.h>
using namespace std;
int n,k,q,a[20][20],f[9000][20],dp[10][9000],d[20];
vector<int> s;
int main() {
	cin>>n>>k>>q;
	for (int i=1;i<=n;i++) {
		cin>>d[i];
	}
	for (int i=0;i<=n;i++) {
		for (int j=0;j<=n;j++) {
			cin>>a[i][j];
		}
	}
	for (int i=0;i<(1<<(n+1));i++) {
		for (int j=0;j<(n+1);j++) {
			f[i][j]=1e9;
		}
	}
	for (int i=0;i<=k;i++) {
		for (int j=0;j<(1<<(n+1));j++) {
			dp[i][j]=1e9;
		}
	}
	dp[0][1]=0;
	f[0][0]=0;
	for (int i=1;i<(1<<(n+1));i++) {
		int c=0;
		for (int j=0;j<(n+1);j++) {
			if ((i>>j&1)) {
				c+=d[j];
				for (int k=0;k<(n+1);k++) {
					f[i][j]=min(f[i][j],f[i^(1<<j)][k]+a[k][j]);
				}
			}
		}
		if (c<=q&&i&1) {
			s.push_back(i);
		}
	}
	for (int i=1;i<=k;i++) {
		for (int j=1;j<(1<<(n+1));j++) {
			for (int h : s) {
				if ((h&j)==h) {
					dp[i][j]=min(dp[i][j],dp[i-1][j^(h-1)]+f[h][0]);
				}
			}
		}
	}
	cout<<dp[k][(1<<(n+1))-1];
}
