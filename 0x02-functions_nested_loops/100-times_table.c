#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 * starting with o.
 * @n: The values of the times table to be printed.
 */
void print_times_table(int n)
{
int i, j, prod;

if (!(n > 15 || n < 0))
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
prod = i * J;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (prod < 10 && j != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((prod % 10) + '0');
}
else if (prod >= 100 && j != 0)
{
_putchar((prod / 100) + '0');
_putchar((prod / 10) % 10 + '0');
_putchar((prod % 10) + '0');
}
else
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
