#include<bits/stdc++.h>
using namespace std;
int n, F0, D, save[100001];
pair<int, int> iA[1000001];
bool visited[1000001];
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> n >> F0 >> D;
    for(int i = 1; i <= n; i++) {
        cin >> iA[i].first >> iA[i].second;
    }
    visited[F0] = true;
    int Count = 0, k = 1;
    for(int i = 1; i <= n; i++) {
        if(double(sqrt(pow(abs(iA[i].first - iA[F0].first), 2) + pow(abs(iA[i].second - iA[F0].second), 2))) <= D && visited[i] == false && i != F0) {
            Count++;
            save[k] = i;
            k++;
            visited[i] = true;
        }
    }
    cout << Count << " ";
    Count = 0;
    for(int i = 1; i < k; i++) {
        cout << save[i] << " ";
        for(int j = 1; j <= n; j++) {
            if(sqrt(pow(abs(iA[i].first - iA[j].first), 2) + pow(abs(iA[i].second - iA[j].second), 2)) <= D && visited[j] == false) {
                Count++;
                visited[j] = true;
            }
        }
    }
    cout << Count;
}