#include "function_pointers.h"
/**
* int_index - function
* @array: array of integers to search
* @size: size of array
* @cmp: function pointer
* Return: defined
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
