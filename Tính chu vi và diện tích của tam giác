Viết chương trình cho phép nhập vào độ dài 3 cạnh của 1 tam giác. Tính chu vi và diện tích của tam giác đó.Ví dụ:
- Nhập vào:
      3 4 5
- In ra:
    Chu vi: 12.00
    Dien tich: 6.00
- Đầu vào:
    3 số thực (float) a b c tương ứng với độ dài 3 cạnh của tam giác. Hai số cách nhau ít nhất 1 khoảng trắng.
- Đầu ra:
    In ra chu vi và diện tích của hình tam giác theo mẫu như ví dụ trên. Làm tròn đến 2 số lẻ sau dấu chấm thập phân.
=================================================================================================================================================================================

#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,cv,dt,p;
    scanf("%f %f %f", &a, &b, &c);
    cv = a + b + c;
    p= cv/2;
    dt = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Chu vi: %0.2f\nDien tich: %0.2f\n", cv, dt );
    
    
    return 0;
}
