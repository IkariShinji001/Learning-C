Viết chương trình đọc vào 1 vài số nguyên từ bàn phím và in ra tổng của chúng.
Ví dụ
Nhập vào:
1 5 9 0
In ra:
15
Nhập vào:
0
In ra
0
Đầu vào
  Các số nguyên được viết trên 1 dòng, các số cách nhau 1 khoảng trắng, kết thúc bằng số 0.
Đầu ra
  In ta tổng của các số.
  
===================================================================================================================================================================================
  
  
  
#include <stdio.h>

int main()
{
    int S = 0;
    while (1)
    {
        int n;
        scanf("%d",&n );
        S = S + n;
        if(n == 0)
        {
            break;
        }
    }
    printf("%d", S);
}
