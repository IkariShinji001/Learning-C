An Armstrong number of three digits is an positive integer such that the sum of the cubes of its digits is equal to the number itself.

Example: 371=3 mũ 3 +7 mũ 3 +1 mũ 3

Write a function that checks whether an integer is an Armstrong number or not.

Prototype

function name: is_Armstrong
parameters: an integer n - the integer to be checked (1000 <= n <= 999)
return type: integer
Body

return 1 if n is an Armstrong number, otherwise return 0.
Notes:

Input is always valid.
See examples for more details in input/output.

For example:

Test	Result
printf("%d\n", is_Armstrong(153));
1
printf("%d\n", is_Armstrong(654));
0
printf("%d\n", is_Armstrong(371));
1
