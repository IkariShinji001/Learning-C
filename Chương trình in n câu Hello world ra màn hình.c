Viết chương trình in n câu Hello world ra màn hình. Số n được đọc từ bàn phím.

Ví dụ
Nhập vào:
2
In ra:
Hello world
Hello world

Đầu vào
  Một số nguyên n (0<n≤100).
Đầu ra
  Hiển thị n câu Hello world, mỗi câu trên 1 hàng.
===================================================================================================================================================================================

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("Hello world\n");
    }
}
