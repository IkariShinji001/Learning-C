Viết hàm tính tổng S:

S = -1 + 2 - 3 + ... +/- n

Trong đó, số chẵn thì cộng số lẻ thì trừ.

Khuôn dạng (Prototype)
Tên hàm (function name): tong
Danh sách tham số (parameters):
n: int (0<n≤106)
S: con trỏ int
Kiểu trả về (return type): void
Thân hàm (Body)

Tính tổng  −1+2−3+...+/−n và lưu kết quả vào ô nhớ mà S trỏ đến


or example:

Test	                      Result
int S;
tong(1,&S);
printf("%d\n", S);            -1
int S;
tong(2,&S);
printf("%d\n", S);             1
int S;
tong(3,&S);
printf("%d\n", S);            -2
int S;
tong(4,&S);
printf("%d\n", S);             2
int S;
tong(5,&S);
printf("%d\n", S);            -3


=================================================================================================================================================================================
#include <stdio.h>

void tong (int n, int *S)
{
    for(int i = 1;i <= n;i++)
    {
        if (i%2 != 0 )
        {
            int temp = -i;
            *S = *S + temp;
        }else
        {
            *S = *S + i;
        }
    }
}

int main()
{
    int S = 0, n;
    scanf("%d", &n);
    tong(n, &S);
    printf("%d", S);
    
}
