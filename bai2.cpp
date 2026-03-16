#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

int main() {
    PhanSo ps1, ps2, max;

    // Phân số 1
    cin >> ps1.tu >> ps1.mau;

    // phân số 2
    cin >> ps2.tu >> ps2.mau;

    // Dừng ct nếu mẫu bằng 0
    if (ps1.mau == 0 || ps2.mau == 0) {
        cout << "Mau=0" << endl;
        return 0;
    }

    //Tính gt cùa 2 ps để so sánh
    float giaTri1 = (float)ps1.tu / ps1.mau;
    float giaTri2 = (float)ps2.tu / ps2.mau;

    if (giaTri1 >= giaTri2) {
        max = ps1;
    } else {
        max = ps2;
    }

    cout << "Phan so lon nhat: " << max.tu << "/" << max.mau << endl;

    return 0;
}