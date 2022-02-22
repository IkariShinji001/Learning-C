Viết 1 hàm tính số hạng thứ n (0≤n≤40) của dãy Fibonaci theo công thức sau:

Fn  =     1,n=0 hoặc n=1
          Fn−2+Fn−1, n>1



Khuôn dạng (Prototype)

Tên hàm (function name): F
Tham số (parameters):
n - kiểu int
Kiểu trả về (return type): int
Thân hàm (Body)

Tính số hạng thứ n của dãy theo công thức trên bằng đệ quy hoặc vòng lặp


===================================================================================================================================================================================


#include <stdio.h>

int F(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }else
    {
        return F(n-1) + F(n-2);
    }
}

int main()
{

    for(int i = 0; i <= 40; i++)
    {
        printf("%d ", F(i));
    }

}
