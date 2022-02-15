Write a program to count the number of digits in a non negative integer.
Input
  an integer n (1 <= n <= 109)
Output
  print the number of digits of n.
  
Input	      Result
1           Number of digits: 1
14          Number of digits: 2
12345678    Number of digits: 8
9876543     Number of digits: 7
1000000000  Number of digits: 10

  
===================================================================================================================================================================================
  
#include <stdio.h>

int main()
{
    int n, count =0;
    scanf("%d", &n);
    while (n != 0)
    {
        n= n/10;
        count++;
    }
    printf("Number of digits: %d", count);
}

