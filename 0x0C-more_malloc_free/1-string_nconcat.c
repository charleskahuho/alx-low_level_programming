#include"main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int _strlen(char *m);
/**
 * string_nconcat - function
 * @s1: first element
 * @s2: second element
 * @n: number of elements
 *
 * Return: defined
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;

	char *combine;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	d = _strlen(s2);
	if (d > n)
	{
		d = n;
	}
	combine = malloc(sizeof(char) * (_strlen(s1) + d + 1));
	if (combine == NULL)
	{
		free(combine);
		return (NULL);
	}
	a = 0;
	for (b = 0; s1[b]; a++, b++)
	{
		combine[a] = s1[b];
	}
	for (c = 0; c < d; a++, c++)
	{
		combine[a] = s2[c];
	}

	combine[a] = '\0';
	return (combine);
}
/**
 * _strlen - function
 * @m: character
 *
 * Return: index
 */
int _strlen(char *m)
{
	unsigned int index = 0;

	while (*m != '\0')
	{
		index++;
		m++;
	}
	return (index);
}
