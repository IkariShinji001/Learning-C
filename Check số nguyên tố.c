Viết hàm kiểm tra số n có phải là số nguyên tố không.

Khuôn dạng (Prototype)

Tên hàm (function name): isPrime
Tham số (parameters):
n - số cần kiểm tra, kiểu: int (2≤n≤106)
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu n là số nguyên tố trả về 1
Ngược lại trả về 0.

  
===================================================================================================================================================================================
  
#include <stdio.h>
#include <math.h>

int isPrime (int n)
{
    int count = 0;
    for(int i = 2; i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", isPrime(n));
}
