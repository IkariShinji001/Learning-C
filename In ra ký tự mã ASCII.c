Viết chương trình cho phép nhập vào một ký tự và in mã ASCII của nó ra màn hình. Tham khảo bảng mã ASCII tại http://www.asciitable.com.
Ví dụ:
Nhập vào: 
  A
In ra:
  Ma ASCII cua 'A' la 65.

Đầu vào:
  1 ký tự (char).
Đầu ra:
  In ra mã ASCII của ký tự vừa nhập theo mẫu trên.
===================================================================================================================================================================================

#include <stdio.h>

int main() {
    char chart;
    scanf("%c", &chart);
    printf("Ma ASCII cua '%c' la %d.", chart, chart);
    return 0;
}
