#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int t;
    cin >> t;
    while(t--) {
        long long ans = 0;
        string s;
        cin >> s;
        vector<long long> v(s.length() + 2);
        vector<vector<long long>> vt(s.length() + 5);
        set<long long> st;
        st.insert(s.length() + 1);
        for(int i = 1; i < s.length(); i++) {
            int x = 1;
            if(s[i - 1] == ')') {
                x--;
            }
            v[i] = x + v[i - 1];
            vt[v[i]].push_back(i);
        }
        for(int i = s.length(); i >= 0; i--) {
            int Count = s.length();
            while(Count > 2 * i) {
                for(long long x : vt[Count]) {
                    st.insert(x);
                }
                Count--;
            }
            auto &q = vt[i];
            if(q.size() == 0) continue;
            for(long long j = 0; j < q.size(); j++) {
                long long x = vt[i][j];
                long long t = *st.upper_bound(x);
                long long lo = j, hi = q.size();
                while(hi - lo > 1) {
                    long long mid = (hi + lo) / 2;
                    if(q[mid] < t) lo = mid;
                    else hi = mid;
                }
                ans += (lo - j);
            }
        }
           cout << ans << '\n';
    }
}