Lan muốn tạo ra một hình chữ nhật từ ký tự # để trang trí như sau:
##########
#        #
#        #
##########
Chiều rộng của hình gồm 10 ký tự, chiều cao của hình thì có thể thay đổi theo yêu cầu của Lan. Trong ví dụ trên, chiều cao của hình là 4.
Hãy giúp Lan viết chương trình để in ra hình chữ nhật như trên với chiều cao h được nhập từ bàn phím.

Đầu vào
  Một số nguyên h (3≤h≤100) - chiều cao của hình chữ nhật.
Đầu ra
  In hình chữ nhật theo mẫu.
  
  
=================================================================================================================================================================================

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
           if(i == 1 || i == n || j == 1 || j == 10)
           {
               printf ("#");
           }else
           {
               printf(" ");
           }
        }
        printf("\n");
    }
}

