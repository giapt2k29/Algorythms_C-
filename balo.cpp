#include<bits/stdc++.h>
using namespace std;
int n, W;
pair<int, int> iA[100001];
int main() {
    cin >> n >> W;
    for(int i = 0; i < n; i++) {
        cin >> iA[i].first >> iA[i].second;
    }
    int iL[100001];
    vector<int> v;
    iL[iA[0]] = 1;
    for(int i = 0; i < n; i++) {
        for(int t = W; t >= iA[i]; t--) {
            if(iL[t] == 0 && iL[t - iA[i]] == 1) {
                iL[t] == 1;
                v.push_back()
            }
        }
    }
}