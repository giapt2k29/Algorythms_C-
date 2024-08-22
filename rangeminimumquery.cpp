#include<bits/stdc++.h>
using namespace std;
long long iST[10000001], iA[10000001], t, n;
void build(long long id, long long l, long long r) {
    if (l == r) {
        iST[id] = iA[l];
        return;
    }

    int mid = (l + r) / 2;
    build(2 * id, l, mid);
    build(2 * id + 1, mid + 1, r);
    iST[id] = min(iST[2 * id], iST[2 * id + 1]);
}

int get(long long id, long long u, long long v, long long l, long long r) {
    if(l > v || r < u) {
        return 1e9;
    }

    if(l >= u && r <= v) {
        return iST[id];
    }

    int mid = (l + r) / 2;
    return min(get(2 * id + 1, u, v, mid + 1, r), get(2* id, u, v, l, mid));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> iA[i];
    }
    build(1, 1, n);
    cin >> t;
    int count1 = 0;
    while(t--) {
        int u, v;
        cin >> u >> v;
        count1 += get(1, u + 1, v + 1, 1, n);
    }
    cout << count1;
}

