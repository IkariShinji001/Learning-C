Write a program to print a triangle using * character.

Input
  an integer n (1 <= n <= 50)
Output
  print a triangle with size of n.
  
Input	      Result
1             *
------------------
3             *
              **
              ***
------------------                          	
6             *
              **
              ***
              ****
              *****
              ******
              
==================================================================================================================================================================================
 
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n;i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
