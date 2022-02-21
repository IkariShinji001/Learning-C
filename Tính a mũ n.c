Write a function that computes a mũ n = a * a * ... * a (the product of multiplying n a's).

Example:
23    = 8
34    = 81
210   = 1024
Prototype
function name: power
parameters:
a - the base, type: float (0 <= |a| <= 5)
n - the exponent, type: int (0 <= n <= 10)
return type: double
Body
return an- the nth power of a.

For example:

Test	                                    Result
printf("%.4f\n", power(2, 3));            8.0000
printf("%.4f\n", power(3.14, 10));        93174.4045
printf("%.4f\n", power(-2.0, 5));         -32.0000
printf("%.4f\n", power(-3.123, 0));       1.0000
                                                         
                                                         
===================================================================================================================================================================================

#include <stdio.h>

double power (float a, int n)
{
    double result = 1.0;
    if(n == 0 || a == 0)
    {
        return 1;
    }else
    {
        for(int i = 1; i <= n; i++)
        {
            result = result*a;
        }
    }
    return result;
}

int main()
{
    float a;
    int n;
    scanf("%f %d", &a, &n);
    printf("%0.4f", power(a,n));
}
