#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    freopen("map.txt", "r", stdin);
    freopen("map1.txt", "w", stdout);
    int t = 15;
    while(t--) {
        getline(cin, s);
        int k;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') continue;
            else {
                k = i;
                break;
            }
        }
        for(int i = k; i < s.length(); i++) {
            if(s[i] != ',') {
                cout << s[i];
            }
        }
        cout << '\n';
    }
}