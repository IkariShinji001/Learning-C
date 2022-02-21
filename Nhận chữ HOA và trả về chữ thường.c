Viết hàm nhận vào một chữ cái in HOA (A-Z) và trả về chữ cái in thường.

Khuôn dạng (Prototype)

Tên hàm (function name): lowCase
Danh sách tham số (parameters): c, kiểu ký tự.
Kiểu trả về (return type): ký tự
Thân hàm (Body)
Tìm và trả về chữ in thường của c.

For example:

Test	                            Result
printf("%c\n", lowCase('A'));       a
printf("%c\n", lowCase('Z'));       z
printf("%c\n", lowCase('G'));       g
printf("%c\n", lowCase('H'));       h


===================================================================================================================================================================================

#include <stdio.h>

char lowCase (char *n)
{
    *n = *n + 32;
    return *n;
}

int main()
{
    char n;
    scanf("%c", &n);
    printf("%c", lowCase(&n));
}
