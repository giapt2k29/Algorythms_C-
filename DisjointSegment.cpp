#include<bits/stdc++.h>
using namespace std;
pair<int, int> *iA;
int n, ans1 = 1, ans2 = 1, ans3 = 1;
bool Sortpair(const pair<int, int> &iB, const pair<int, int> &iC) {
	return iB.second < iC.second;
}
bool SortValue(const pair<int, int> &iB, const pair<int, int> &iC) {
	return (iB.second - iB.first) < (iC.second - iC.first);
}
void Init() {
	freopen("test.inp", "r", stdin);
	freopen("test.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n;
	iA = new pair<int, int>[n];
	for(int i = 0; i < n; i++) {
		cin >> iA[i].first >> iA[i].second;

	}
}
void greedy1() {
	sort(iA, iA + n);
	int start = iA[0].second;
	for(int i = 1; i < n; i++) {
		if(iA[i].first >= start) {
			ans1++;
			start = iA[i].second;
		}
	}
}

void greedy2() {
	sort(iA, iA + n, Sortpair);
	int start = iA[0].second;
	for(int i = 1; i < n; i++) {
		if(iA[i].first >= start) {
			ans2++;
			start = iA[i].second;
		}
	}
}

void greedy3() {
	sort(iA, iA + n, SortValue);
	int start = iA[0].second;
	for(int i = 1; i < n; i++) {
		if(iA[i].first >= start) {
			ans3++;
			start = iA[i].second;
		}
	}
}
int main() {
	Init();
	greedy1();
	greedy2();
	greedy3();
	cout << max(ans1, max(ans2, ans3));
}