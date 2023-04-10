#include"main.h"
#define NULL 0
/**
 * _strpbrk - function
 * @s: pointer
 * @accept: pointer
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;

	for (i = 0; s[1]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);

	return (0);
}

