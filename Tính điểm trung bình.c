Điểm trung bình = (LT + TH1 + TH2 + TH3 + TH4)/5
+ Ví dụ:
Nhập vào:
  4.5 5 4.5 4 5
In ra:
  DAT
Đầu vào:
  5 số thực (float) tương ứng với số điểm của 5 bài kiểm tra. 
Đầu ra:
  In ra DAT nếu điểm trung bình từ 4.0 trở lên.
  Ngược lại in ra KHONG DAT

===================================================================================================================================================================================

#include <stdio.h>


int main()
{
    float LT, TH1, TH2, TH3, TH4;
    scanf("%f %f %f %f %f", &LT, &TH1, &TH2, &TH3, &TH4);
    float DTB = (LT + TH1 + TH2+ TH3 + TH4)/5.0;
    if(DTB >= 4)
    {
        printf("DAT");
    }else
    {
        printf("KHONG DAT");
    }

    return 0;
}
