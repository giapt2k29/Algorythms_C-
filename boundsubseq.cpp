#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int n, m, iA[N][N], dd, kq = 1e9;
void Setup(int x, int i, int tong, int dd) {
	if(x > n) {
		kq = min(kq, tong + iA[x][i]);
		return;
	}
	for(int i = 1; i <= n; i++) {
		bool ok = true;
		if(dd >> i & 1) ok = false;
		if(tong + iA[x][i] >= kq) ok = false;
		if(iA[x][i] == 0) ok = false;
		if(ok) {
			Setup(x + 1, i, tong + iA[x][i], 1 << i | dd);
		}
	}
}
int main() {
	freopen("test.inp", "r", stdin);
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		iA[x][y] = z;
	}
	Setup(1, 0, 0, 0);
	cout << kq;
}