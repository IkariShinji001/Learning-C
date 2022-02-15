Viết chương trình tính n! (n giai thừa):
    n! = 1 . 2 . 3 . ... . n
với n được đọc từ bàn phím.

Đầu vào
  một số nguyên  n (0<n≤20).
Đầu ra
  in ra kết quả của n!
      
   
===================================================================================================================================================================================
      
      
#include <stdio.h>

int main()
{
    long long n, giaithua =1;
    scanf("%lld", &n);
    for(int i = 1; i <= n; i++)
    {
        giaithua = giaithua*i;
    }
    printf("%lld! = %lld",n,giaithua);
}
