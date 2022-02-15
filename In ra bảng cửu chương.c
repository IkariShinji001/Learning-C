Viết chương trình C để sinh bảng cửu chương của một số n, được đọc từ bàn phím.
Đầu vào
  Một số nguyên n (1≤n≤100).
Đầu ra
  Hiển thị bảng cửu chương  n.
  
===================================================================================================================================================================================
 
  
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d Times Table\n", n);
    printf("====================\n");
    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
