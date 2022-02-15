Viết chương trình in các số từ a đến b ra màn hình theo mẫu:
a
a+1
...
b
với a, b là 2 số nguyên được nhập từ bàn phím.
Ví dụ
Nhập vào:
5 8
In ra:
5 
6
7
8
Nhập vào:
1
In ra
1

Đầu vào
  Hai số nguyên a và b (−106≤a≤b≤106).
Đầu ra
  Hiển thị các số từ a đến b, mỗi số trên 1 dòng.
===================================================================================================================================================================================

  
#include <stdio.h>

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
    	printf("%d\n", i);	
	}
}
