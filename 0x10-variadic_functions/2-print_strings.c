#include<stdio.h>
#include<stdarg.h>
#include<stddef.h>
#include"variadic_functions.h"
/**
 * print_strings - function
 * @separator: constant character
 * @n: constant number of arguements
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list count;

	unsigned int i;

	char *string;

	va_start(count, n);
	if (n == 0)
	{
		printf("\n");
	}
	for (i = 0; i < n ; i++)
	{
		string = va_arg(count, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(count);
}

