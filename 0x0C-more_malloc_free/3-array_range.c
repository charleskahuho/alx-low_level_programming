#include "main.h"
#include<stdio.h>
#include <stdlib.h>
/**
* array_range - function
* @min: minimum value of array
* @max: max value of array
*
*
* Return: ptr to array or null if fail
*/
int *array_range(int min, int max)
{
	int *range, size, a;

	if (min > max)
	{
		return (NULL);
	}
	size = 1;
	size += max - min;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++, min++)
	{
		range[a] = min;
	}
	return (range);
}
