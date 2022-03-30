Viết chương trình nhập vào n số nguyên và cho biết những số nguyên tố đã nhập

Đầu vào
  Dòng đầu tiên là n - số lượng các số nguyên (0 < n ≤ 1000).
  Dòng thứ hai chứa n số nguyên, mỗi số cách nhau khoảng trắng
Đầu ra
  Dòng đầu tiên là n số nguyên đã nhập, mỗi số cách nhau khoảng trắng
  Dòng thứ 2 là số lượng các số nguyên tố 
  Dòng thứ 3 là các số nguyên tố đã nhập
  
  
  Input	      Result
5             1 2 3 4 5 
1 2 3 4 5     3
              2 3 5
              
              
========================================================================================================================================================================
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool checksonguyento(int n)
{
    if(n < 2)
    {
        return false;
    }
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
       return true; 
    }else
    {
        return false;
    }
}

int main()
{
    int a[1000];
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n;i++)
    {
        if(checksonguyento(a[i]) == true)
        {
            count++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("%d\n", count);
    for(int i = 0; i < n;i++)
    {
        if(checksonguyento(a[i]) == true)
        {
            printf("%d ", a[i]);
        }
    }
    
}
