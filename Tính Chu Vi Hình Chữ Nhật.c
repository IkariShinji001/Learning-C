Viết chương trình tính chu vi hình chữ nhật với chiều dài và chiều rộng được nhập từ bàn phím.
Đầu vào:
	2 số nguyên d, r mô tả chiều dài và chiều rộng của hình chữ nhật. Hai số cách nhau ít nhất 1 khoảng trắng.
Đầu ra:
	In ra chu vi của hình chữ nhật theo mẫu.
	
=================================================================================================================================================================================

#include <stdio.h>

int main()
{
    int d, r, cv;
    scanf("%d %d", &d, &r);
    cv = (d + r)*2;
    printf("Chu vi: %d", cv);

    return 0;
}
