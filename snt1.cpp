#include<bits/stdc++.h>
using namespace std;
int n, m, a[1001][1001];
int choose;
void sorthang() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = j; k < m; k++) {
                if(a[i][j] > a[i][k]) {
                    int tmp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = tmp;
                    // swap(a[i][j], a[i][k]);
                }
            }
        }
    }
}
void outhang2() {
    for(int i = 0; i < n; i++) {
        for(int j = m - 1; j >= 0; j--) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void outhang1() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void sortcot() {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = j; k < n; k++) {
                if(a[j][i] > a[k][i]) {
                    int tmp = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = tmp;
                    // swap(a[j][i], a[k][i]);
                }
            }
        }
    }
}

void outcot1() {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void outcot2() {
    for(int j = n - 1; j >= 0; j--) {
        for(int i = 0; i < m; i++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
int main() {
    // freopen("test.inp", "r", stdin);
    // freopen("test.out", "w", stdout);
    cout << "Nhap vao so nguyen n va m" << '\n';
    scanf("%d %d", &n, &m);
    cout << "Nhap ma tran m cot va n hang" << '\n';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    cout << "Chon cac phuong an" << '\n';
    cout << "Chon 1 de sap xep tang dan theo hang" << '\n';
    cout << "Chon 2 de sap xep giam dan theo hang" << '\n';
    cout << "Chon 3 de sap xep tang dan theo cot" << '\n';
    cout << "Chon 4 de sap xep giam dan theo cot" << '\n';
    cin >> choose;
    switch(choose) {
        case 1:
            sorthang();
            outhang1();
            break;
        case 2:
            sorthang();
            outhang2();
            break;
        case 3:
            sortcot();
            outcot1();
            break;
        case 4:
            sortcot();
            outcot2();
            break;
    }
}