Số Armstrong 3 chữ số là một số tự nhiên có 3 chữ số sao cho tổng lập phương của các chữ số của nó bằng chính nó.
Ví dụ:
153=1 mũ 3+5 mũ 3+3 mũ 3

370=3 mũ 3+7 mũ 3+0 mũ 3

Viết chương trình in ra tất cả các số Armstrong 3 chữ số.

Đầu vào
  Không có.
Đầu ra
  In ra tất cả các số Armstrong từ nhỏ đến lớn, mỗi số cách nhau 1 khoảng trắng.
  
 
====================================================================================================================================================================================
 
  
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                if ((100*i + 10*j + k ) == (i*i*i)+(j*j*j)+(k*k*k))
                {
                    printf("%d ",100*i + 10*j + k );
                }
            }
        }
    }
}
