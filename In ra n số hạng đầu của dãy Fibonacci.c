The Fibonacci sequence is a series where the next term is the sum of pervious two terms. The first two terms of the Fibonacci sequence is 0 followed by 1.

The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

Write a program to display a Fibonacci series up to n elements.

Input
    an positive n: the number of elements (2 <= n <= 30)
Output
    print n first Fibonacci numbers, separated by comma (,)

Notes:

Input is always valid.
You MUST NOT use printf before scanf.
See examples for more details in input/output.

For example:

Input	    Result
2          0, 1
4          0, 1, 1, 2
8          0, 1, 1, 2, 3, 5, 8, 13
10         0, 1, 1, 2, 3, 5, 8, 13, 21, 34
  
  
======================================================================================================================================================================================
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int firstF = 0;
    int secF = 1;
    int nextF;
    for (int i = 0 ; i < n ; i++ )
    {
       if ( i <= 1 )
          nextF = i;
       else
       {
          nextF = firstF + secF;
          firstF = secF;
          secF = nextF;
       }
        if (i == 0)
        {
            printf("%d", nextF);
        }
        else
        {
            printf(", %d", nextF);
        }
    }
}
