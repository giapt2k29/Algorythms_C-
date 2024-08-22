#include<bits/stdc++.h>
using namespace std;
int n, c, *iA;
bool Solve(int *arr, int n, int c, int distance) {
	int count = 1;
	int last_position = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] - last_position >= distance) {
			count += 1;
			last_position = arr[i];
		}
	}
	return count >= c;
}
int max1(int *arr, int n, int c) {
	sort(arr, arr + n);
	int low = 0;
	int high = arr[n - 1] - arr[0];
	int max_distance = 0;

	while(low <= high) {
		int mid = low + (high - low) / 2;
		if(Solve(arr, n, c, mid)) {
			max_distance = max(max_distance, mid);
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return max_distance;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> c;
		iA = new int[n];
		for(int i = 0; i < n; i++) {
			cin >> iA[i];
		}
		cout << max1(iA, n, c) << '\n';
	}
}
