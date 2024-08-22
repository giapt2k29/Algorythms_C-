#include<bits/stdc++.h>
#define bit(mask, i) ((mask >> i) & 1)
using namespace std;
int n, s, *iA, ans = 0;
main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	cin >> n >> s;
	iA = new int[n];
	for(int i = 0; i < n; i++) {
		cin >> iA[i];
	}
	for(int mask = 1; mask < (1 << n); mask++) {
		int sum = 0;
		for(int i = 0; i < n; i++) {
			if(bit(mask, i)) {
				sum += iA[i];
			}
		}
		ans += (sum == s);
	}
	cout << ans;
}