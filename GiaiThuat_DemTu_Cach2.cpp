#include <iostream>
#include <string>
using namespace std;

// hàm đếm từ
int Ham_DemTu(string str){
    int dem = 0;

    if (str[0] != ' ' && !('0' <= str[0] && str[0] <= '9'))
    {
        dem = 1;
    }
    
    for (int i = 0; i <= str.length() - 2; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            bool kiemTra1 = 'a' <= str[i + 1] && str[i + 1] <= 'z' ? true : false;
            bool kiemTra2 = 'A' <= str[i + 1] && str[i + 1] <= 'Z' ? true : false;

            if (kiemTra1 || kiemTra2)
            {
                dem ++;
            }
        }
    }

    return dem;
}

int main(){
    // fake nhập vào 1 chuỗi
    string str1 = "abc124  56hk79   6868    abcde   gh780 abc345kmda   hksh  ";
    string str2 = " abc124  56hk79   6868    abcde   gh780 abc345kmda   hksh";
    string str3 = "9abc124  56hk79   6868    abcde   gh780 abc345kmda   hksh    ";

    // gọi hàm đếm từ
    int dem1 = Ham_DemTu(str1);
    int dem2 = Ham_DemTu(str2);
    int dem3 = Ham_DemTu(str3);

    // in ra màn hình
    cout << dem1 << "\n\n";         // kết quả: 5
    cout << dem2 << "\n\n";         // kết quả: 5
    cout << dem3 << "\n\n";         // kết quả: 4

    return 0;
}