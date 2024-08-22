#include<bits/stdc++.h>
using namespace std;
int n, *iA, Count = 0, mod = 1e9 + 7;
void mergesort(int iA[], int l, int r, int mid) {
	int i, j, k;
	int n1 = mid - l + 1;
	int n2 = r - mid;
	int L[n1], R[n2];
	for(int i = 0; i < n1; i++) {
		L[i] = iA[l + i];
	}
	for(int j = 0; j < n2; j++) {
		R[j] = iA[mid + 1 + j];
	}
	i = 0; j = 0; k = l;
	while(i < n1 && j < n2) {
		if(L[i] <= R[j]) {
			iA[k] = L[i];
			i++;
		}
		else {
			Count += n1 - i;
			iA[k] = R[j];
			j++;
		}
		k++;
	}

	while(i < n1) {
		iA[k] = L[i];
		i++;
		k++;
	}

	while(j < n2) {
		iA[k] = R[j];
		j++;
		k++;
	}
}
void merge(int iA[], int l, int r) {
	if(l >= r) return;
	else {
		int mid = l + (r - l) / 2;
		merge(iA, mid + 1, r);
		merge(iA, l, mid);
		mergesort(iA, l, r, mid);
	}
}
int main() {
	freopen("test.inp", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin >> n;
	iA = new int[n];
	for(int i = 0; i < n; i++) {
		cin >> iA[i];
	}
	merge(iA, 0, n - 1);
	cout << Count;
}