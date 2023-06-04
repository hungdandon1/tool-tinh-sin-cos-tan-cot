#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Khai báo biến và nhập giá trị từ người dùng
    string tig_so;
    double tig_so_goc;
    cout << "Nhap ti so luong giac duoc cung cap (sin, cos, tan, or cot): ";
    cin >> tig_so;
    cout << "Nhap gia tri cua ti so luong giac duoc cung cap: ";
    cin >> tig_so_goc;

    // Tính các tỉ số lượng giác còn lại dựa trên tỉ số lượng giác được cung cấp
    double sin_so, cos_so, tan_so, cot_so;
    if (tig_so == "sin") {
        sin_so = tig_so_goc;
        cos_so = sqrt(1 - pow(tig_so_goc, 2));
        tan_so = tig_so_goc / cos_so;
        cot_so = cos_so / tig_so_goc;
    }
    else if (tig_so == "cos") {
        sin_so = sqrt(1 - pow(tig_so_goc, 2));
        tan_so = sin_so / tig_so_goc;
        cos_so = tig_so_goc;
        cot_so = 1 / tan_so;
    }
    else if (tig_so == "tan") {
        sin_so = tig_so_goc / sqrt(1 + pow(tig_so_goc, 2));
        cos_so = 1 / sqrt(1 + pow(tig_so_goc, 2));
        cot_so = cos_so / sin_so;
        tan_so = tig_so_goc;
    }
    else {
        cos_so = tig_so_goc / sqrt(1 + pow(tig_so_goc, 2));
        sin_so = 1 / sqrt(1 + pow(tig_so_goc, 2));
        tan_so = sin_so / cos_so;
        cot_so = tig_so_goc;
    }

    // Hiển thị kết quả
    cout << "sin = " << sin_so << endl;
    cout << "cos = " << cos_so << endl;
    cout << "tan = " << tan_so << endl;
    cout << "cot = " << cot_so << endl;

    return 0;
}
