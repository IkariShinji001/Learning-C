Tính giá điện sinh hoạt của 1 hộ gia đình. Viết chương trình cho phép nhập từ bàn phím chỉ số điện sinh hoạt cũ (sc), và chỉ số điện mới (sm). 
Tính số kwh mà hộ đó tiêu thụ và số tiền mà hộ này phải đóng trong tháng, biết giá bán lẻ điện sinh hoạt được tính theo bảng sau:
Giá bán lẻ điện sinh hoạt        Giá
Bậc 1: Cho kWh từ 0-50           1.549
Bậc 2: Cho kWh từ 51 – 100       1.600
Bậc 3: Cho kWh từ 101 -200       1.858
Bậc 4: Cho kWh từ 201 -300       2.340
Bậc 5: Cho kWh từ 301 -400       2.615
Bậc 6: Cho kWh từ 401 trở lên    2.701

Ví dụ:
Nhập vào:
20 120
In ra:
100 Kwh: 157450 VND
Nhập vào:
201 501
In ra:
300 Kwh: 577250 VND
Đầu vào
  2 số nguyên mô tả chỉ số cũ, chỉ số mới (giả sử chỉ số cũ luôn < chỉ số mới)
Đầu ra
  In ra số Kwh sử dụng và số tiền phải trả
  
===================================================================================================================================================================================
#include <stdio.h>

int main ()
{
    int SC, SM, STT, TienDien;
    scanf("%d %d", &SC, &SM);
    STT = SM - SC;
        if (STT <= 50)
        {
            TienDien = STT * 1549;
        }else if (STT > 50  && STT <= 100)
        {
            TienDien = 50 * 1549 + (STT - 50) * 1600;
        }else if (STT > 100 && STT <= 200)
        {
            TienDien = 50 * 1549 + 50 * 1600 + (STT - 100)*1858;
        }else if (STT > 200 && STT <= 300)
        {
            TienDien = 50 * 1549 + 50 * 1600 + 100*1858 + (STT - 200)*2340;
        }else if (STT > 300 && STT <= 400)
        {
            TienDien = 50 * 1549 + 50 * 1600 + 100*1858 + 100*2340 + (STT - 300)*2615;

        }else if (STT > 400 )
        {
            TienDien = 50 * 1549 + 50 * 1600 + 100*1858 + 100*2340 + 100*2615 + (STT - 400) * 2701;
        }
    printf("%d Kwh: %d VND", STT, TienDien);

}


    
