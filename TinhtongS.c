Viết chương trình tổng sau:
    S = 1/2 + 2/3 + ... + n/n+1
với n là số nguyên dương đầu vào được nhập từ bàn phím.

Ví dụ
Nhập vào:
5
In ra:
3.55
Đầu vào
  1 số nguyên biểu thị cho n  (n≥1)
Đầu ra
  Hiển thị giá trị của tổng với 2 số lẻ thập phân
 
 
===================================================================================================================================================================================



#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float S = 0;
    for (int i =1; i <= n; i ++)
    {
        S = S + (i/(i+1.0));
    }
    printf("%.2f", S);
    
}
  
