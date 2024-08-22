#include<bits/stdc++.h>
using namespace std;
string s, Number1, Number2, Day, Time1, Time2;
int Count, Total = 0;
bool check = true;
vector<pair<string, string>> V;
vector<string> V2[87000];
int main() {
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    while(Count < 2) {
        cin >> s;
        if(s == "#") {
            Count ++;
        }

        if(s == "call") {
            cin >> Number1 >> Number2 >> Day >> Time1 >> Time2;
            for(int i = 0; i < Number1.length(); i++) {
                if(Number1[i] < '0' || Number1[i] > '9' || Number2[i] < '0' || Number2[i] > '9') {
                    check = false;
                }
            }
            if(check != false) {
                V.push_back({Number1, Number2});
                Total ++;
                int CountT1, CountT2;
                for(int i = 0; i < 2; i++) {
                    CountT1 += int(Time1[i] - '0') * pow(10, 1 - i) * 3600;
                    CountT2 += int(Time2[i] - '0') * pow(10, 1 - i) * 3600;
                }

                for(int i = 3; i < 5; i++) {
                    CountT1 += int(Time1[i] - '0') * pow(10,4 - i) * 60;
                    CountT2 += int(Time2[i] - '0') * pow(10, 4 - i) * 60;
                }

                for(int i = 6; i < 8; i++) {
                    CountT1 += int(Time1[i] - '0') * pow(10, 7 - i);
                    CountT2 += int(Time2[i] - '0') * pow(10, 7 - i);
                }
                V2[CountT2 - CountT1].push_back(Number1);
            }
        }

        if(s == "?check_phone_number") {
            if(check == true)
                cout << 1 << '\n';
            else cout << 0 << '\n';
        }

        if(s == "?number_calls_from") {
            int dd = 0;
            cin >> Number1;
            for(int i = 0; i < V.size(); i++) {
                if(V[i].first == Number1) {
                    dd ++;
                }
            cout << dd << '\n';
            }
        }

        if(s == "?number_total_calls") {
            cout << Total << '\n';
        }

        if(s == "?count_time_calls_from") {
            cin >> Number1;
        }
    }
}
