Phương trình bậc hai là phương trình có dạng:
ax2+bx+c=0với a≠0.

Tính Δ=b2−4ac
Nếu Δ < 0, phương trình vô nghiệm
Nếu Δ = 0, phương trình có 1 nghiệm kép x=−b2a
Nếu Δ > 0, phương trình có 2 nghiệm phân biệt
x=−b−Δ√2a
x=−b+Δ√2a
Viết chương trình cho phép nhập từ bàn phím 3 số thực a, b và c là các hệ số của phương trình bậc 2. Biện luận các trường hợp có thể có của a, b, c để tìm nghiệm của phương trình.
Đầu vào:
  3 số thực (float) a b c (a≠0). 
Đầu ra:
  - Nếu phương trình vô nghiệm, in ra VO NGHIEM
  - Nếu phương trình có 1 nghiệm kép, in ra NGHIEM KEP 
     x = yyyy.dd
  - Nếu phương trình có 2 nghiệm phân biệt, in ra: NGHIEM PHAN BIET
    x1 = yyyy.dd
    x2 = yyyy.dd
Làm tròn số đến 2 số lẻ.
====================================================================================================================================================================================

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x;
    scanf("%f %f %f,", &a, &b, &c);
    delta = b*b - 4*a*c;
        if (delta < 0)
        {
            printf("VO NGHIEM");
        }else if (delta == 0)
        {
            x = -b/2*a;
            printf("NGHIEM KEP\nx = %0.2f", x);
        }else
        {
            x = ((-b - sqrt(delta))/2*a);
            printf("NGHIEM PHAN BIET\nx1 = %0.2f",x);
            x = ((-b + sqrt(delta))/2*a);
            printf("\nx2 = %0.2f",x);

        }

    return 0;
}

