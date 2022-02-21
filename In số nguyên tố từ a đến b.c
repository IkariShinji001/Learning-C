You are given a function
int isPrime(int n);
which checks if n is prime or not.

Write a function that prints prime numbers from a to b (included).
Prototype
function name: printPrimeNumbers
parameters: two integers a, b (2 <= a <= b <= 106).
return type: none
Body
print prime numbers between a and b in one line, separated by a space.
For example:

Test	                            Result
printPrimeNumbers(2, 10);         2 3 5 7
printPrimeNumbers(7, 7);          7
printPrimeNumbers(1000, 1050);    1009 1013 1019 1021 1031 1033 1039 1049
printPrimeNumbers(4, 4);



====================================================================================================================================================================================
  
  
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if(count == 0)
    {
        return 1;
    }
}
void printPrimeNumbers (int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if(isPrime(i) == 1)
        {
            printf("%d ", i);
        }
    }
}



int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printPrimeNumbers(a, b);
}
