#include <bits/stdc++.h>
using namespace std;
int n, it[500005];
pair<int, int> iA[100001];
void update(int i, int l, int r, int le, int ri,int val)
{
    if (l > ri || r < le) {
        return;
    }
    if (l >= le && r <= ri) {
        it[i] = max(it[i], val);
        return;
    }
    int mid = (l + r) / 2;
    update(i * 2, l, mid, le, ri, val);
    update(i * 2 + 1, mid, r + 1, le, ri, val);
}
int get(int i, int l, int r, int pos) {
    if (l > pos || r < pos) {
        return 0;
    }
    if (l == r) {
        return it[i];
    }
    int mid = (l + r) / 2;
    if (pos <= mid) {
        return max(it[i], get(i * 2, l, mid, pos));
    }
    return max(it[i], get(i * 2 + 1, mid + 1, r, pos));
}
int main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    cin.tie(nullptr), cout.tie(nullptr)->ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> iA[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> iA[i].second;
    }
    long long ans = 0;
    cout << ans << "\n";
    for (int i = 0; i < n; i++)
    {
        long long z = get(1, 1, n, iA[i].first);
        ans = max(ans, z + iA[i].second);
        update(1, 1, n, iA[i].first + 1, n, z + iA[i].second);
    }
    cout << ans;
}