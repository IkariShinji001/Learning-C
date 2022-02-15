Phương trình bậc nhất là phương trình có dạng:
ax + b = 0

+ Trường hợp a = 0
    Nếu b = 0, phương trình có vô số nghiệm
    Ngược lại, phương trình vô nghiệm
+ Trường hợp a != 0, phương trình có 1 nghiệm duy nhất:
    x = -b/a
Viết chương trình cho phép nhập từ bàn phím 2 số thực a, b biểu diễn là các hệ số của phương trình bậc 1. Biện luận các trường hợp có thể có của a, b để tìm nghiệm của phương trình.
Đầu vào:
  2 số thực (float) a b. 
Đầu ra:
  Nếu phương trình vô nghiệm, in ra VO NGHIEM
  Nếu phương trình vô số nghiệm, in ra VO SO NGHIEM
  Nếu phương trình có 1 nghiệm duy nhất, in ra x = yyyy.d, làm tròn số đến 1 số lẻ.
  
===================================================================================================================================================================================================

#include <stdio.h>

int main()
{
   float a, b, x;
   scanf("%f %f",&a ,&b);
   if(a == 0)
   {
       if(b == 0)
       {
           printf("VO SO NGHIEM");
       }else
       {
           printf("VO NGHIEM");
       }
   }else
   {
       x = -b/a;
       printf("x = %0.1f", x);
   }
    return 0;
}
    
