Số nguyên tố (prime number) là một số nguyên dương (>1) mà chỉ chia hết cho 1 và chính nó. Nói cách khác số nguyên tố không có ước số nào trong khoảng từ 2 đến n-1.
Ví dụ, 2, 3, 5, 7, 11, 13, ... là các số nguyên tố.
Viết chương trình kiểm tra xem n có phải là số nguyên tố hay không, n được nhập từ bàn phím.

Đầu vào
    Một số nguyên dương n (2≤n≤106)
Đầu ra
    Nếu n là số nguyên tố, in ra "n is a prime number.", ngược lại in ra "n is not a prime number."
  
  
==================================================================================================================================================================================
  
  
#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n);i++ )
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("%d is a prime number.", n);
    }else
    {
        printf("%d is not a prime number.", n);
    }

}

  
