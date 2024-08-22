#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("test.inp", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n + m + 1), b(n + m + 1);
        
        // Function to fill array
        auto fill = [](vector<int>& arr, int size) {
            for (int i = 0; i < size; ++i) {
                cin >> arr[i];
            }
        };
        
        fill(a, n + m + 1);
        fill(b, n + m + 1);
        
        long long ed = 0, et = 0;
        int cd = 0, ct = 0;
        vector<int> mark1(a.size()), mark2(a.size());
        
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] > b[i] && cd <= n) {
                ed += a[i];
                cd += 1;
                mark1[i] = 1;
            } else if (a[i] < b[i] && ct < m) {
                ed += b[i];
                ct += 1;
                mark1[i] = 0;
            } else if (cd <= n) {
                ed += a[i];
                cd += 1;
                mark1[i] = 1;
            } else {
                ed += b[i];
                ct += 1;
                mark1[i] = 0;
            }
        }
        
        ct = 0;
        cd = 0;
        
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] < b[i] && ct <= m) {
                et += b[i];
                ct += 1;
                mark2[i] = 0;
            } else if (a[i] > b[i] && cd < n) {
                et += a[i];
                cd += 1;
                mark2[i] = 1;
            } else if (ct <= m) {
                et += b[i];
                ct += 1;
                mark2[i] = 0;
            } else {
                et += a[i];
                cd += 1;
                mark2[i] = 1;
            }
        }
        
        for (int i = 0; i < a.size(); ++i) {
            long long v1 = 0;
            if (mark1[i] == 1) {
                v1 = ed - a[i];
            } else if (mark2[i] == 0) {
                v1 = et - b[i];
            }
            cout << v1 << " ";
        }
        cout << endl;
    }
    return 0;
}