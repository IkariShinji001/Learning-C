Viết 1 hàm cho phép kiểm tra n số nguyên đầu vào (0<n≤1000) có được sắp xếp tăng dần hay không?

Khuôn dạng (Prototype)
  Tên hàm (function name): isSort()
  Tham số (parameters):
      A[] - kiểu int
      n - kiểu int
Kiểu trả về (return type): int
Thân hàm (Body) 
    Nếu mảng A tăng dần, kết quả của hàm là 1, ngược lại kết quả là 0
    
=========================================================================================================================================================================

int isSort(int A[], int n)
{
    int count = 0;
    for(int i = 0; i < n;i++)
    {
        if(A[i] > A[i+1])
        {
            count++;
            break;
        }
    }
    if(count == 0)
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
}
