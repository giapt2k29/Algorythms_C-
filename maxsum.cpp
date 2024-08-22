#include<bits/stdc++.h>
using namespace std;
int iA[100001], n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> iA[i];
    }
    int sum = 0, maxsum = 0;
    for(int i = 0; i < n; i++) {
        sum += iA[i];
        if(sum < 0) sum = 0;
        else {
            maxsum = max(maxsum, sum);
        }
    }
    cout << maxsum;
}