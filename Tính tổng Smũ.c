Viết chương trình tổng bình phương của n số nguyên dương:

S=1mũ2+2mũ2+...+nmũ2

với n là số nguyên dương được nhập từ bàn phím.

Ví dụ
Nhập vào:
3
In ra:
14
Đầu vào
  1 số nguyên biểu thị cho n  (1≤n≤103)
Đầu ra
  Hiển thị giá trị của tổng.
  
  
==================================================================================================================================================================================
  
  
  
#include <stdio.h>

int main()
{
    long long int n, S = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        S = S + i*i;
    }
    printf("%lld", S);
}
