#include<bits/stdc++.h>
using namespace std;
int n, k1, k2, iF[1001][1001];
bool mark[1001][1001];
int Solve(int i, int k) {
	if(mark[i][k]) return iF[i][k];
	if(i == n) {
		return k >= k1 || k == 0;
	}
	int ans = 0;
	for(int j = 0; j <= 1; j++) {
		if(j == 0 && k < k1 && i > 0) continue;
		if(j == 1 && k >= k2) continue;
		ans += Solve(i + 1, j ? k + 1 : 0);
	}
	mark[i][k] = 1;
	iF[i][k] = ans;
	return ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n >> k1 >> k2;
	cout << Solve(0, 0);
}
