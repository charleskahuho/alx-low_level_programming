#include"function_pointers.h"
#include <stddef.h>
/**
 * array_iteractor - function
 * @array: array of elements
 * @size: size of array
 * @action: function pointer
 *
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (action != NULL && array != NULL)
	{
		for (k = 0; k < size; k++)
		{
			array[size] = array[k];
			action(array[size]);
		}
	}
}
