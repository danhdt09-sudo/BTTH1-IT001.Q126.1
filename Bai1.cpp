#include <iostream>
#include <algorithm> 
using namespace std;

// Hàm tìm UCLN, nhận vào 2 số a,b bất kì, trẻ về giá trị của UCLN. 
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
    cout << "Ket Qua: " << tu << "/" << mau << endl;
}

int main() {
    int t, m;
    cout << "Tu: "; cin >> t;
    cout << "Mau: "; cin >> m;
    rutGonPhanSo(t, m);
    return 0;
}
