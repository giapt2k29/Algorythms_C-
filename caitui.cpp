#include<bits/stdc++.h>
using namespace std;
#define bit(mask, i) ((mask >> i) & 1)
int n, b, max1 = 0;
pair<int, int> *iA;
vector<int> v;
void Init() {
	cin >> n >> b;
	iA = new pair<int, int>[n];
	for(int i = 0; i < n; i++) {
		cin >> iA[i].first >> iA[i].second;
	}
	for(int mask = 1; mask < (1 << n); mask++) {
		int weight = 0, giatri = 0;
		for(int i = 0; i < n; i++) {
			if(bit(mask, i)) {
				weight += iA[i].first;
				giatri += iA[i].second;
			}
		}
		if(weight <= b) {
			if(max1 < giatri) {
				v.clear();
				for(int i = 0; i < n; i++) {
					if(bit(mask, i)) {
						v.push_back(iA[i].first);
					}
				}
				max1 = giatri;
			}
		}
	}
	cout << max1 << '\n';
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}
main() {
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	Init();
}