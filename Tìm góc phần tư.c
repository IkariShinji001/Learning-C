Viết chương trình nhập vào số nguyên chỉ số đo độ của một góc và cho biết nó thuộc góc phần tư thứ mấy trên đường tròn lượng giác.
Gợi ý

- Nhập vào số đo lượng giác bất kỳ ( x > 0).

- Xác định cung lượng giác theo điều kiện dưới đây:

o    Góc phần tư thứ I: (360*k) <= x < (90 + 360*k)

o    Góc phần tư thứ II: (90 + 360*k) <= x < (180 + 360*k)

o    Góc phần tư thứ III: (180 + 360*k) <= x < (270 + 360*k)

o    Góc phần tư thứ III: (270 + 360*k) <=  x < 360*(k+1)
===================================================================================================================================================================================

  
#include <stdio.h>

int main ()
{
   int x,d;
    scanf("%d", &x);
    d = x % 360;
    if(d == 0)
    {
        printf("1");
    }else if(d >= 90 && d < 180)
    {
        printf("2");
    }else if(d >= 180 && d < 270)
    {
        printf("3");
    }else
    {
        printf("4");
    }

}


