#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _calloc - function
 * @nmemb: first memebr
 * @size: size of nmemb
 *
 *
 * Return: defined
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *setmem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	setmem = malloc(size * nmemb);
	if (setmem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		setmem[i] = 0;
	}
	return (setmem);
}
