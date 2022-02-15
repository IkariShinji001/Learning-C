Tính x mũ n:
Với số thực x và số nguyên dương n đầu vào, đầu ra là kết quả xn được hiển thị với 4 số lẻ thập phân.

Đầu vào
  2 số x, n  (0<n≤30).
Đầu ra
  Hiển thị kết quả với 4 số lẻ phần thập phân.
  
===============================================================================================================================================================================

#include <stdio.h>

int main ()
{
    float x;
    int n;
    float tich = 1;
    scanf("%f %d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        tich = tich*x;
    }
    printf("%0.4f", tich);
}
