#include<bits/stdc++.h>
using namespace std;
int status;
struct PhieuNhap {
    string tennhacc;
    int day, month, year, sosanpham, sotiendathanhtoan, sotienphaithanhtoan;
    vector<string> maso;
    vector<string> tensp;
    vector<int> soluongsp;
    vector<int> dongianhap;
    vector<double> tonggiam;
    double giam;
} a[10001];
struct Sanpham {
    string masosp, tensp;
    int dongianhap;
} b[100001];
int total = 1, save = 0;
string tieptuc;
void Input() {
    int sum = 0, tongsoluong = 0;
    cout << "Nhap thong tin Phieu Nhap   " << total << ":" << '\n';
    cout << "Ten nha Cung cap: ";
    getline(cin, a[total].tennhacc);
    cout << "Ngay: ";
    cin >> a[total].day;
    cout << "Thang: ";
    cin >> a[total].month;
    cout << "Nam: ";
    cin >> a[total].year;
    cout << "So san pham: ";
    cin >> a[total].sosanpham;
    cout << "Nhap danh sach san pham:" << '\n';
    for(int i = 1; i <= a[total].sosanpham; i++) {
        string ma, ten;
        int sl, dongia;
        cout << "San pham " << i << '\n';
        cout << "Ma so SP: ";
        cin >> ma;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        a[total].maso.push_back(ma);
        cout << "Ten San Pham: ";
        getline(cin, ten);
        a[total].tensp.push_back(ten);
        cout << "So luong SP: ";
        cin >> sl;
        a[total].soluongsp.push_back(sl);
        cout << "Don gia nhap: ";
        cin >> dongia;
        a[total].dongianhap.push_back(dongia);
        if(sl < 10) {
            a[total].tonggiam.push_back(0);
        }
        if(sl >= 10 && sl < 50) {
            a[total].tonggiam.push_back(sl * dongia * 0.01);
        }
        if(sl >= 50 && sl < 100) {
            a[total].tonggiam.push_back(sl * dongia * 0.02);
        }
        if(sl >= 100 && sl < 200) {
            a[total].tonggiam.push_back(sl * dongia * 0.025);
        }
        if(sl >= 200) {
            a[total].tonggiam.push_back(sl * dongia * 0.03);
        }
        sum += sl * dongia;
    }

    for(int i = 0; i <= a[total].sosanpham; i++) {
        a[total].giam += a[total].tonggiam[i];
    }
    cout << "So tien da Thanh toan: ";
    cin >> a[total].sotiendathanhtoan;
    a[total].sotienphaithanhtoan = sum;
    cout << "Ban da nhap thanh cong!" << '\n' << "Bam phim bat ki de tiep tuc";
    cin >> tieptuc;
    if(tieptuc != "") {
        ++total;
        status = 3;
    }
}

void Output() {
    int tongthanhtoan = 0, tongdathanhtoan = 0,tongchua;
    double tonggiam;
    cout << "Ban da chon xuat Phieu Nhap, !" << '\n';
    for(int i = 1; i <= total - 1; i++) {
        for(int i = 0; i < 100; i++) {
            cout << "_";
        }
    cout << '\n';
        cout << "Ten nha Cung cap: " << a[i].tennhacc << '\n';
        cout << "Ngay thu: Ngay" << a[i].day << " " << "thang" << " " << a[i].month << " " << "nam" << " " << a[i].year << '\n';
        cout << "So san Pham:" << a[i].sosanpham << '\n';
        cout << "Tong da Thanh toan:" << a[i].sotiendathanhtoan << '\n';
        cout << "Tong phai thanh toan" << a[i].sotienphaithanhtoan << '\n';
        tongthanhtoan += a[i].sotienphaithanhtoan;
        tonggiam += a[i].giam;
        tongdathanhtoan += a[i].sotiendathanhtoan;
        cout << "Tong tien giam:" << a[i].giam << '\n';
        cout << "Chua thanh toan: " << a[i].sotienphaithanhtoan - a[i].giam - a[i].sotiendathanhtoan << '\n';
        tongchua += a[i].sotienphaithanhtoan - a[i].giam - a[i].sotiendathanhtoan;
        cout << "Chi tiet san pham" << '\n';
        cout << "tMaSP      TenSanPham      Dongia      soluong     Thanhtien       giam" << '\n';
        for(int j = 0; j < a[i].maso.size(); j++) {
            cout << a[i].maso[j] << "   " << a[i].tensp[j] << "     " << a[i].soluongsp[j] << "     " << a[i].soluongsp[j] * a[i].dongianhap[j] << "    " << a[i].tonggiam[j] << '\n';
        }
    }

    cout << "Tong phai thanh toan cac Phieu Nhap: " << tongthanhtoan << '\n';
    cout << "Tong da thanh toan cac Phieu Nhap: " << tongdathanhtoan << '\n';
    cout << "Tong duoc giam cua cac phieu nhap: " << tonggiam << '\n';
    cout << "Tong chua thanh toan" << tongchua;
    cout << "Bam phim bat ki de tiep tuc !";
}
//Nguyen Van Giap - 20225126
int main() {
    while(1) {
        cout << "Nguyen Van Giap - 20225126 - 738916 - 20232" << '\n';
        cout << "** CHUONG TRINH QUAN LY NHA CC **" << '\n';
        cout << "**1. Nhap Nha CC Phieu Nhap    **" << '\n';
        cout << "**2. IN KET QUA PHIEU Nhap - San Pham**" << '\n';
        cout << "**0. Thoat                   **" << '\n';
        cout << "****************************************" << '\n';
        cout << "**     Nhap lua chon cua ban           **" << '\n';
        cin >> status;
        if(status == 0) {
            cout << "Ban chon thoat chuong trinh";
            exit(0);
        }
        else if(status == 1) {
            cout << "Ban da chon nhap ds Phieu Nhap SP" << '\n';
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            Input();
        }
        else if(status == 2) {
            Output();
        }
    }
}