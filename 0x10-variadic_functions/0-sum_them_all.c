#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this returns the sum of all parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate he sum
 *
 * Return:sum or if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_tart(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(num, int);

	va_end(nums);

	return (sum);
}
