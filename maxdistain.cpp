#include<bits/stdc++.h>
using namespace std;
#define bit(mask, i) ((mask >> i) & 1)
int t, n, c, *iA;
vector<int> v;
void Init() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	cin >> t;
	while(t--) {
		int dd = 0, tmp, best, optbest = 0, tmp1 = 0;
		cin >> n >> c;
		iA = new int[n];
		for(int i = 0; i < n; i++) {
			cin >> iA[i]; 
		}
		for(int mask = 1; mask < (1 << n); mask++) {
			dd = 0; best = 1e9, tmp = 0, tmp1 = 0;
			for(int i = 0; i < n; i++) {
				if(bit(mask, i)) {
					dd++;
				}
			}
			if(dd == c) {
				for(int i = 0; i < n; i++) {
					if(bit(mask, i)) {
						v.push_back(iA[i]);
					}
				}
				for(int i = 1; i < dd; i++) {
					best = min(best, v[i] - v[i - 1]);
				}
				optbest = max(optbest, best);
				v.clear();
			}
		}
		cout << optbest;
		delete iA;
	}
}
main() {
	Init();
}