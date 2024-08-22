#include<bits/stdc++.h>
using namespace std;
int t, c, n, *iA, best = 1e9, Count;
void binary(int iA[], int l, int r, int c) {
	if(Count == c) {
		cout << best << '\n';
		return;
	}
	if((r - l) % 2 == 0) {
		int mid = (r + l) / 2;
		if(iA[mid] - iA[l] > iA[r] - iA[mid]) {
			Count++;
			best = min(best, iA[mid] - iA[l]);
			binary(iA, l, mid, c);
		}
		else {
			Count++;
			best = min(best, iA[r] - iA[mid]);
			binary(iA, l, mid, c);
		}
	}
	else {
		int mid = (r + l) / 2;
		if(iA[mid + 1] - iA[l] > iA[r] - iA[mid]) {
			Count++;
			best = min(best, iA[mid + 1] - iA[l]);
			binary(iA, l, mid + 1, c);
		}
		else {
			Count++;
			best = min(best, iA[r] - iA[mid]);
			binary(iA, mid, r, c);
		}
	}
}
void Init() {
	cin >> t;
	while(t--) {
		cin >> n >> c;
		iA = new int[n];
		best = 1e9;
		Count = 0;
		for(int i = 0; i < n; i++) {
			cin >> iA[i];
		}
		sort(iA, iA + n);
		binary(iA, 0, n, c);
		delete iA;
	}
}
int main() {
	freopen("test.inp", "r", stdin);
	Init();
}