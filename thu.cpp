#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[40];
    a[0] = 1;
    a[1] = 2;
    for(int i = 2; i < 40; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
}