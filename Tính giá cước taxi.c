Bảng giá cước taxi 4 chỗ được cho trong bảng sau:
Chủng loại xe        Giá mở cửa (VNĐ)        Trong phạm vi 30km (VNĐ)        Từ km thứ 31 trở đi (VNĐ)
Toyota Vios (5 chỗ)   11.500/500m                 14.500/1km                      11.600/1km

Viết chương trình cho phép nhập từ bàn phím số km đã đi. Tính số tiền phải trả và hiển thị lên màn hình.
  Ví dụ:
Nhập vào:
5
In ra:
5.00 km = 76750.00 VND
Đầu vào:
  1 số nguyên thực
Đầu ra:
  Số tiền tương ứng
===================================================================================================================================================================================


#include <stdio.h>

int main()
{
    float SoKM, SoTien;
    scanf("%f", &SoKM);
    if(SoKM <= 0.5)
    {
        SoTien = 11500;
    }else if (SoKM > 0.5 && SoKM <= 30)
    {
        SoTien = 11500 + (SoKM - 0.5)*14500;
    }else 
    {
        SoTien = 11500 + 29.5*14500 + (SoKM - 30)* 11600;
    }
    printf("%0.2f km = %0.2f VND", SoKM, SoTien);
}



