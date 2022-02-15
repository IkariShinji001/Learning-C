Viết chương trình C để sinh ra bảng cửu chương từ 1 đến 9

Đầu vào
  Không có.
Output
  Hiển thị các bảng cửu chương từ 1 đến 9.

==================================================================================================================================================================================
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 9; i++)
    {
        printf("%d Times Table\n====================\n", i);
        for(int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");

    }
}
