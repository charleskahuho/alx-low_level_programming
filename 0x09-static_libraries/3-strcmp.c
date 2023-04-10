#include"main.h"
/**
 * _strcmp - function
 * @s1: parsrmeter
 * @s2: parameter
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] == s2[i])
		{
	 		i++;
		}
		else
		{
			break;
		}
	}
		return (s1[i] - s2[i]);
}

