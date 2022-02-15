Viết chương trình kiểm tra xem trong các số từ a đến b có số nào là ước số của p không.
với a, b và p là số nguyên dương được nhập từ bàn phím.

Ví dụ
Nhập vào:
4 6 10
In ra:
Co it nhat 1 so trong doan [4, 6] la uoc cua 10.
Nhập vào:
5 7 9
In ra
  Khong co so nao trong doan [5, 7] la uoc cua 9.

Đầu vào
  3 số nguyên dương a, b và p (0<a,b,p≤106).
Đầu ra
Hiển thị theo mẫu trên.
  
  
  
 ==================================================================================================================================================================================
  
  
 #include <stdio.h>

int main()
{
    int a, b, n, count = 0;
    scanf("%d %d %d", &a, &b, &n);
    for(int i = a; i <= b; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        printf("Khong co so nao trong doan [%d, %d] la uoc cua %d.", a, b, n);
    }else
    {
        printf("Co it nhat %d so trong doan [%d, %d] la uoc cua %d.", count, a, b, n);
    }

}

