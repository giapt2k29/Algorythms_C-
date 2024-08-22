#include<bits/stdc++.h>
using namespace std;

vector<int> a[100001];
int Low[10001], Num[10001];
int Count = 1, res = 0;
stack<int> st;

void tarjan(int u) {
    Low[u] = Num[u] = Count++;
    st.push(u);

    for(auto v : a[u]) {
        if(Num[v]) {
            Low[u] = min(Low[u], Num[v]);
        }
        else {
            tarjan(v);
            Low[u] = min(Low[u], Low[v]);
        }
    }
    if(Num[u] == Low[u]) {
        res++;
        int tmp;
        do {
            tmp = st.top();
            st.pop();
            Num[tmp] = Low[tmp] = INT_MAX;
        }
        while(tmp != u);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    // freopen("test.inp", "r", stdin);
    // freopen("test.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
    }
    for(int i = 0; i < n; i++) {
        if(!Num[i]) {
            tarjan(i);
        }
    }
    cout << res - 1;
    return 0;
}