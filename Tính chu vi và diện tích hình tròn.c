Viết chương trình cho phép nhập vào đường kính của 1 hình tròn. Tính chu vi và diện tích của hình tròn đó.

+ Ví dụ:
- Nhập vào:
    3
- In ra:
    Chu vi: 9.42
    Dien tich: 7.07
    Quy ước: sử dụng pi = 3.14
+ Đầu vào:
    - 1 số thực (float) mô tả đường kính hình tròn.
+ Đầu ra:
    - In ra chu vi và diện tích của hình tròn theo mẫu như ví dụ trên. Làm tròn đến 2 số lẻ sau dấu chấm thập phân.
===================================================================================================================================================================================

#include <stdio.h>

int main() {
    float d, cv, dt;
    scanf ("%f", &d);
    cv = d * 3.14;
    dt = (d/2)*(d/2)*3.14;
    printf("Chu vi: %0.2f\nDien tich: %0.2f", cv, dt);
    return 0;
}
