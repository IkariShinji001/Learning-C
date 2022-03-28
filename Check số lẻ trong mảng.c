Viết chương trình nhập vào n số nguyên và cho biết những số nguyên lẻ trong đã nhập

Đầu vào
Dòng đầu tiên là n - số lượng các số nguyên (0 < n ≤ 1000).
Dòng thứ hai chứa n số nguyên, mỗi số cách nhau khoảng trắng

Đầu ra
Dòng đầu tiên là n số nguyên đã nhập, mỗi số cách nhau khoảng trắng
Dòng thứ 2 là số lượng các số nguyên lẻ 
Dòng thứ 3 là các số nguyên lẻ đã nhập

Input	          Result
5               1 2 3 4 5  
1 2 3 4 5       3
                1 3 5

              
6                54 32 12 45 7 8
54 32 12 45 7 8  2
                 45 7

======================================================================================================================================================================
#include <stdio.h>

int main()
{
    int a[1000];
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 1)
        {
            count++;
        }
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("%d\n", count);
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 1)
        {
            printf("%d ", a[i]);
        }
    }
}
