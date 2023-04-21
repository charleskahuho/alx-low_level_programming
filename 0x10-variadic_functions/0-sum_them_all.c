#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - function
 *
 * @n: arguements count
 * @...: variadic arguemnts
 *
 * Return: defined
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list count;

	va_start(count, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(count, int);
	}
	va_end(count);
	return (sum);
}


