Điểm trung bình = (LT + TH1 + TH2 + TH3 + TH4)/5

Viết chương trình cho phép nhập vào điểm của 5 bài kiểm tra của 1 sinh viên, tính điểm trung bình, quy đổi sang điểm chữ (A, B, C, ...) của sinh viên này.
Quy tắc chuyển đổi điểm chữ thành điểm số được cho trong bản bên dưới:
Điểm số     	Điểm chữ
>=9.0	            A
8.0 đến <9.0	    B+
7.0 đến < 8.0	    B
6.0 đến < 7.0	    C+
5.0 đến < 6.0	    C
4.5 đến < 5.0	    D+
4.0 đến < 4.5	    D
<4.0	            F

Ví dụ:
Nhập vào:
  4.5 5 4.5 4 5
In ra:
  Diem so: 4.6
  Diem chu: D+
Đầu vào:
  5 số thực (float) tương ứng với số điểm của 5 bài kiểm tra. 
Đầu ra:
  In ra điểm số và điểm chữ theo mẫu trên, làm tròn điểm số đến 1 số lẻ.

====================================================================================================================================================================================

#include <stdio.h>


int main()
{
    float LT, TH1, TH2, TH3, TH4;
    scanf("%f %f %f %f %f", &LT, &TH1, &TH2, &TH3, &TH4);
    float DTB = (LT + TH1 + TH2+ TH3 + TH4)/5.0;
    if(DTB >= 9)
    {
        printf("Diem so: %0.1f \nDiem chu: A", DTB);
    }else if(DTB < 9 && DTB >= 8)
    {
        printf("Diem so: %0.1f \nDiem chu: B+", DTB);
    }else if(DTB < 8 && DTB >= 7)
    {
        printf("Diem so: %0.1f \nDiem chu: B", DTB);
    }else if(DTB < 7 && DTB >= 6)
    {
        printf("Diem so: %0.1f \nDiem chu: C+", DTB);
    }else if(DTB < 6 && DTB >= 5)
    {
        printf("Diem so: %0.1f \nDiem chu: C", DTB);
    }else if(DTB < 5 && DTB >= 4.5)
    {
        printf("Diem so: %0.1f \nDiem chu: D+", DTB);
    }else if(DTB < 4.5 && DTB >= 4)
    {
        printf("Diem so: %0.1f \nDiem chu: D", DTB);
    }else
    {
        printf("Diem so: %0.1f \nDiem chu: F", DTB);
    }

    return 0;
}
