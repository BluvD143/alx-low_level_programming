#include <stdio.h>
/**
 * main - Prints the sum of even-valued fibonacci sequence
 * sequence must not exceed 4000000
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fib1 = o, fib2 = 1, fibsum;
float tot_sum;

while (1)
{
fibsum = fib1 + fib2;
if (fibsum > 4000000)
break;

if ((fibsum % 2) == 0)
tot_sum += fibsum;

fib1 = fib2;
fib2 = fibsum;
}
printf("%.of\n", tot_sum);

return (0);
}
