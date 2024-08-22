#include<bits/stdc++.h>
using namespace std;
int H, W, n;
const int N = 15;
pair<int, int> A[N];
int bB[N][N];
int ans = 0;
bool stop = false;
void Init() {
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	cin >> H >> W;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int u, v;
		cin >> u >> v;
		A[i].first = u;
		A[i].second = v;
	}
	memset(bB, 0, sizeof(bB));
}

void update(int height, int width, int x, int y, int value) {
	for(int i = x; i < height + x; i++) {
		for(int j = y; j < width + y; j++) {
			bB[i][j] = value;
		}
	}
}

bool check(int height, int width, int x, int y) {
	for(int i = x; i < height + x; i++) {
		for(int j = y; j < width + y; j++) {
			if(bB[i][j] == 1) {
				return false;
			}
		}
	}
	return true;
}

void TRY(int k) {
	if(stop == true) {
		return;
	}
	for(int i = 0; i < H; i++) {
		for(int j = 0; j < W; j++) {
			if(check(A[k].first, A[k].second, i, j) == true && i + A[k].first <= H && j + A[k].second <= W) {
				update(A[k].first, A[k].second, i, j, 1);
				if(k == n - 1) {
					ans = 1;
					stop = true;
				}
				else {
					TRY(k + 1);
				}
				update(A[k].first, A[k].second, i, j, 0);
			}
			else {
				if(check(A[k].second, A[k].first, i, j) == true && A[k].second + i <= H && j + A[k].first <= W) {
					update(A[k].second, A[k].first, i, j, 1);
					if(k == n - 1) { 
						ans = 1;
						stop = true;
					}
					else {
						TRY(k + 1);
					}
					update(A[k].second, A[k].first, i, j, 0);
				}
			}
		}
	}
}
int main() {
	Init();
	TRY(0);
	cout << ans << '\n';
}