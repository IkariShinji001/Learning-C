Viết chương trình in các số từ 1 đến n ra màn hình theo mẫu:
1, 2, 3, ..., n
với n là số nguyên dương được nhập từ bàn phím.

Ví dụ
Nhập vào:
5
In ra:
1, 2, 3, 4, 5$
Nhập vào:
1
In ra
1$

Đầu vào
  Một số nguyên n (0<n≤106).
Đầu ra
  Hiển thị các số từ 1 đến n theo mẫu trên, kết thúc bắng dấu $.
  
===================================================================================================================================================================================
  
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1$");
    }else
    {
        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
            {
                printf("1,");
            }else 
            {
                if (i < n)
                {
                    printf(" %d,",i);
                }else if (i == n)
                {
                    printf(" %d$", i);
                }
                
            }
        }
    }
    
}
