Viết chương trình tìm số n nhỏ nhất sao cho

 1+ 1/2 +...+ 1/n > S

với S là số thực (double) dương được đọc từ bàn phím.

Đầu vào
    Một số thực dương S (0<S≤10.0).
Đầu ra
    In n ra màn hình.

Gợi ý
Bài này thuộc dạng tìm số đầu tiên thoả điều kiện kết hợp với tính giá trị cho bước kế tiếp dựa vào bước hiện tại.
tong = 1.0
Cho n chạy từ 0, 1, 2, ...
Kiểm tra điều kiện tong > S, nếu thoả thì thoát
Tính lại tong cho bước kế tiếp (n+1) = tong (cũ) + 1/(n+1)
In giá trị của n
For example:
Input 	Result
1.0     2
1.3     2
2.0     4
10      12367

  
=================================================================================================================================================================================
  
#include <stdio.h>

int main()
{
    double S, tong = 1.0;
    scanf("%lf", &S);
    for(int i = 2;;i++)
    {
        tong = tong + 1.0/i;
        if(tong > S)
        {
            printf("%d", i);
            break;
            
        }
    }
    
}
