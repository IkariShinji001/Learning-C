Viết 1 hàm cho phép chèn x vào vị trí p trong mảng gồm n số nguyên.

Khuôn dạng (Prototype)

Tên hàm (function name): Insert()
Tham số (parameters):
  x - kiểu int
  p - kiểu int
  A[] - kiểu int,
  pn - con trỏ kiểu int, số phần tử của mảng
Kiểu trả về (return type): Void
Thân hàm (Body)
  Chèn x vào vị trí p trong mảng n số nguyên.
    
============================================================================================================================================================================
 void Insert(int x, int p, int A[],int *pn)
{
    for(int i = *pn ; i >= p;i--)
    {
        A[i+1] = A[i];
    }
    A[p] = x;
    *pn = *pn + 1;
}
