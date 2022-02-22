Số chính phương là số là cân bậc 2 của một số tự nhiên (hay là bình phương của 1 số tự nhiên). Viết hàm cho phép kiểm tra số nguyên dương n đầu vào có là số chính phương hay không?

   Ví dụ:   9  là số chính phương vì căn bậc 2 của 9 = 3
            10 không là số chính phương vì căn bậc 2 của 10 =3.16 


Khuôn dạng (Prototype)

Tên hàm (function name): isSquareNumber()
Tham số (parameters):
n - số cần kiểm tra, kiểu: int (1≤n≤109)
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu n là số chính phương, kết quả trả về là 1, ngược lại kết quả trả về là 0

Test	                                Result
printf("%d",isSquareNumber(1));         1
printf("%d",isSquareNumber(10));        0
  
  
===================================================================================================================================================================================
  
#include <stdio.h>
#include <math.h>

int isSquareNumber(int n)
{
    int sqrtn = sqrt(n);
    int sqrN = sqrtn * sqrtn;
    if(sqrN == n)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", isSquareNumber(n));
}
