Viết chương trình tính ước số chung lớn nhất (Greatest Common Divisor - GCD) của 2 số a và b.

Đầu vào
  Hai số nguyên a và b cách nhau 1 khoảng trắng (0≤|a|,|b|≤106).
Đầu ra
  Hiển thị ước chung lớn nhất của 2 số a và b.
  
  
===================================================================================================================================================================================
 
#include <stdio.h>

int main()
{
    int a, b, temp;
    scanf("%d %d", &a, &b);
    if (a < 0)
    {
        a = -a;
    }
    if (b < 0)
    {
        b = -b;
    }
    if (a == 0)
    {
        printf("%d", b);
    }else if( b == 0)
    {
         printf("%d", a);
    }else
    {
         while (b != 0)
         {
             temp = a%b;
             a = b;
             b = temp;
         }
         printf("%d", a);
    }

}
