#include<bits/stdc++.h>
using namespace std;
int n, F0, D, F1 = 0, Count = 0;
pair<int, int> iA[100001];
bool visited[1000001];
void solve(int u, pair<int, int> *iA) {
    queue<pair<int, int>> q;
    q.push({iA[u].first, iA[u].second});
    visited[u] = true;
    int x = iA[u].first;
    int y = iA[u].second;
    while(!q.empty()) {
        q.pop();
        for(int i = 1; i <= n; i++) {
            if(i != u && visited[i] == false && double(sqrt(pow(abs(iA[i].first - x), 2) + pow(abs(iA[i].second - y), 2))) <= D) {
                if(u == F0) {
                    F1++;
                    visited[i] = true;
                    q.push({iA[i].first, iA[i].second});

                }
                else {
                    Count++;
                    visited[i] = true;
                    q.push({iA[i].first,  iA[i].second});
                }
            }
        }
    } 
}
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin >> n >> F0 >> D;
    for(int i = 1; i <= n; i++) {
        cin >> iA[i].first >> iA[i].second;
    }
    solve(F0, iA);
    for(int i = 1; i <= n; i++) {
        if(i != F0 && visited[i] == true) {
            solve(i, iA);
        }
    }
    cout << F1 << " " << Count;
}