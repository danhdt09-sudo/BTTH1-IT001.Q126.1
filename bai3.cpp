#include <iostream>
#include <algorithm> 
using namespace std;

// Hàm tìm UCLN, nhận vào 2 số a,b bất kì, trả về giá trị của UCLN. 
int timUCLN(int a, int b) {
    return __gcd(a, b);
}

/* Hàm rút gọn, nhận vào tử và mẫu, chia cả 2 cho UCLN
   Đảo dấu tử và mẫu nếu mẫu số nhập vào âm */
void rutGonPhanSo(int tu, int mau) {

    int ucln = timUCLN(abs(tu), abs(mau));
    tu /= ucln;
    mau /= ucln;

    // Đảm bảo mẫu số là số dương
    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }
    cout <<tu<<"/"<<mau<<endl;
}

int main () {

    int tu1; cout <<"tu1:"; cin >> tu1;    
    int mau1; cout <<"mau1:"; cin >> mau1;   

    int tu2; cout <<"tu2:"; cin >>tu2;
    int mau2; cout <<"mau2:"; cin >> mau2;

    if (mau1==0 || mau2==0) return 0; //Thoát ct nếu có mẫu=0

    int tu_tong = tu1*mau2+tu2*mau1;
    int mau_tong = mau1*mau2;
    cout <<"Tong:"; rutGonPhanSo(tu_tong,mau_tong); cout <<endl;

    int tu_hieu = tu1*mau2-tu2*mau1;
    int mau_hieu = mau1*mau2;
    cout <<"Hieu:"; rutGonPhanSo(tu_hieu,mau_hieu); cout <<endl;

    int tu_tich = tu1*tu2;
    int mau_tich = mau1*mau2;
    cout <<"Tich:"; rutGonPhanSo(tu_tich,mau_tich); cout <<endl;

    int tu_thuong = tu1*mau2;
    int mau_thuong = mau1*tu2;
    if (tu2 == 0) {
        cout << "Thuong:Chia cho 0";
        return 0;
    }
    else cout << "Thuong: "; rutGonPhanSo(tu_thuong,mau_thuong); 

    return 0;
}
