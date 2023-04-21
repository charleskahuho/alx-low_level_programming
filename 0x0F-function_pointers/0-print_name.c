#include"function_pointers.h"
/**
 * print_name - function
 * @name: first element
 * @f: function pointer
 *
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
