#include<bits/stdc++.h>
using namespace std;
int n,c[20][20],dp[200005][20];
vector<int> s;
struct iii {
	int x,y,z;
	int dis(iii a) {
		return abs(a.x-x)+abs(a.y-y)+max(0,a.z-z);
	}
} a[20];
int main() {
	cin>>n;
	for (int i=1;i<=n;i++) {
		cin>>a[i].x>>a[i].y>>a[i].z;
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			c[i][j]=a[i].dis(a[j]);
		}
	}
	for (int k=1;k<=n;k++) {
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=n;j++) {
				c[i][j]=min(c[i][j],c[i][k]+a[k].dis(a[j]));
			}
		}
	}
	for (int i=0;i<(1<<n);i++) {
		for (int j=0;j<n;j++) {
			dp[i][j]=1e9;
		}
	}
	dp[1][0]=0;
	for (int i=1;i<(1<<n);i++) {
		for (int j=0;j<n;j++) {
			if (i>>j&1) {
				for (int k=0;k<n;k++) {
					dp[i][j]=min(dp[i][j],dp[i^(1<<j)][k]+c[k+1][j+1]);
				}
			}
		}
	}
	int ans=1e9;
	for (int i=1;i<n;i++) {
		ans=min(ans,dp[(1<<n)-1][i]+c[i+1][1]);
	}
	cout<<ans;
}