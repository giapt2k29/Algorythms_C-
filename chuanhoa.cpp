#include<bits/stdc++.h>
using namespace std;
string s, result;
bool dd[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("test.txt", "r", stdin);
    getline(cin, s);
    // if(s[0] !=  " ") {
    //     s[0] = s[0] - 20;
    // }
    // else {
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ' && dd[i - 1] == true) {
                dd[i] = true;
                continue;
            }
            if(s[i] == ' ' && dd[i - 1] == false) {
                dd[i] = true;
                result += s[i];
            }
            if(s[i] != ' ' && dd[i - 1] == true) {
                dd[i] = false;
                if(s[i] >= 'a' && s[i] <= 'z') {
                    s[i] = s[i] - 32;
                }
                result += s[i];
            }
            
            if(s[i] != ' ' && dd[i - 1] == false) {
                dd[i] = false;
                    if(s[i] >= 'A' && s[i] <= 'Z') {
                        s[i] += 32;
                        result += s[i];
                    }
                    else result += s[i];
            }
        }
        int tmp;
        for(int i = 0; i < result.length(); i++) {
            if(result[i] != ' '){
                tmp = i;
                break;
            }
        }

        for(int i = tmp; i < result.length(); i++) {
            cout << result[i];
        }
    //}
}