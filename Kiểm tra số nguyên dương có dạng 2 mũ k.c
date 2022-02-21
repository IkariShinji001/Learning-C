Viết một hàm kiểm tra 1 số nguyên dương có ở dạng 2k hay không?

Khuôn dạng (Prototype)
Tên hàm (function name): isPower2
Tham số (parameters):
n - số cần kiểm tra, kiểu: int (1≤n≤109)
Kiểu trả về (return type): int

Thân hàm (Body)
Nếu n ở dạng  2k  trả về 1
Ngược lại trả về 0.
  
Test	                          Result
printf("%d", isPower2(1));        1
printf("%d", isPower2(123));      0
printf("%d", isPower2(11));       0

  
===================================================================================================================================================================================
 
#include <stdio.h>
#include <math.h>

int isPower2(int n)
{
    int result = 0;
    for(int i=0;result <= n;i++)
    {
        result = pow(2,i);
        if(result == n)
        {
            return 1;
            break;
        }
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", isPower2(n));
}
