#include<stdarg.h>
#include<stdio.h>
#include<stddef.h>
#include"variadic_functions.h"
/**
 * print_numbers - function
 * @separator: pointer
 * @n: number of arguements
 * @...: variadic arguemnts
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int num, i;

	va_start(count, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(count, const unsigned int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(count);

}
