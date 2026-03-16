#include <iostream>
using namespace std;

// Hàm kiểm tra năm nhuận, trả về true hoặc false
bool ktNamNhuan(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

/* Hàm lấy số ngày tối đa trong tháng, kiểm tra case tương ứng
 là tháng mấy, trả về 28 hoặc 29,30,31*/
int SoNgayTrongThang(int m, int y) {
    switch (m) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return ktNamNhuan(y) ? 29 : 28;
        default:
            return 31;
    }
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;

    int Songaytoida = SoNgayTrongThang(m, y);

    if (d < Songaytoida) {  
        d++;
    } else {
        d = 1;  
        if (m < 12) {
            m++;
        } else {
            m = 1;
            y++;
        }
    }

    cout <<d<<"/"<<m<<"/"<<y;
    return 0;
}