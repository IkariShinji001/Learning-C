Viết hàm kiểm tra tính và trả về bội số chung nhỏ nhất của hai số nguyên a và b.

Khuôn dạng (Prototype)

Tên hàm (function name): LCM
Tham số (parameters):
a, b - hai số cần tính bội chung nhỏ nhất, kiểu: int (1≤|a|,|b|≤106)
Kiểu trả về (return type): int
Thân hàm (Body)
Tính và trả về bội số chung nhỏ nhất của a và b.


For example:

Test	                          Result
printf("%d", LCM(1, 4));          4
printf("%d", LCM(6, 9));          18
printf("%d", LCM(-6, 9));         18
printf("%d", LCM(-12, 8));        24
printf("%d", LCM(1000, 2000));    2000
  
  
====================================================================================================================================================================================

#include <stdio.h>
#include <math.h>

int UCNN (int *a, int *b)
{
    while(*b != 0)
    {
        int temp = *a % *b;
        *a = *b;
        *b = temp;
    }
    return *a;
}

int LCM (int a, int b)
{
    int BCNN = (a * b)/UCNN(&a, &b);
    if (BCNN > 0)
    {
        return BCNN;
    }else
    {
        return -BCNN;
    }
}
int main ()
{
    int a,b;
    scanf("%d %d", &a, &b);
    
    printf("%d", LCM(a,b));
}
