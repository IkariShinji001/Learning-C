Viết chương trình tìm số k nhỏ nhất sao cho
                2 mũ k ≥ n
với n nguyên dương được đọc từ bàn phím.

Đầu vào
  Một số nguyên dương n (0<n≤109).
Đầu ra
  In k ra màn hình.
  
  
===================================================================================================================================================================================


#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    for (int i= 0;; i++)
    {
        int S = pow(2,i);
        if (S >= n)
        {
            k = i;
            break;
        }
    }
    printf("%d", k);
}
