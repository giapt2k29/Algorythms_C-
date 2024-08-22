//C++ 
#include <bits/stdc++.h>
using namespace std; 
pair<int, int> *iA;
int n;
bool sortfunc(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}
int main() 
{ 
    cin >> n;
    iA = new pair<int, int>[n];
    for(int i = 0; i < n; i++) {
        cin >> iA[i].first >> iA[i].second;
    }
    sort(iA, iA + n, sortfunc);
    int temp = iA[0].second;
    int Count = 1;
    for(int i = 1; i < n; i++) {
        if(iA[i].first > temp) {
            Count++;
            temp = iA[i].second;
        }
    }
    cout << Count;
}