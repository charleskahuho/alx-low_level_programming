#include<stdio.h>
#include<stddef.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_all - function
 * @format: list of arguements
 *
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	void print_all(const char * const format, ...)
{
	va_list count;
	char *separator = "";
	int k = 0, j;

	prt alltype[] = {
		{"c", chprint},
		{"i", inprint},
		{"f", flprint},
		{"s", stprint},
		{NULL, NULL}
	};

	va_start(count, format);
	while (format && format[k])
	{
		j = 0;
		while (alltype[j].test)
		{
			if (format[k] == alltype[j].test[0])
			{
				printf("%s", separator);
				alltype[j].printer(count);
				septr = ", ";
				break;
			}
			j++;
		}
		k++;
	}
	printf("\n");
	va_end(count);
}
/**
 * chprint - function
 * @count: arguements
 *
 * Return: none
 */
void chprint(va_list count)
{
	printf("%c", va_arg(count, int));
}
/**
 * inprint - function
 * @count: arguemnts
 *
 * Return: none
 */
void flprint(va_list count)
{
	printf("%f", va_arg(count, double));
}
/**
* stprint - function
* @count: arguemnts
*
* Return: none
*/
void stprint(va_list count)
{
	char *s;

	s = va_arg(count, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
/**
* inprint - function
* @count: arguements
*
* Return: none
*/
void inprint(va_list count)
{
	printf("%d", va_arg(count, int));
}
