Viết chương trình in ra màn hình tất cả các số nguyên tố từ 2 đến N. Với N được nhập từ bàn phím.
  
Đầu vào
  Một số nguyên dương N (1≤N≤106).
Đầu ra
  In ra các số nguyên tố nhỏ hơn N trên 1 dòng, mỗi số cách nhau 1 khoảng trắng.

  
===================================================================================================================================================================================
  
  
  
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++)
    {
        int count = 0;
        for (int j = 2; j <= sqrt(i); j++ )
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf ("%d ", i);
        }
    }
}


