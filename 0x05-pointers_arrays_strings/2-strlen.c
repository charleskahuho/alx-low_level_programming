#include"main.h"
#include<string.h>
/**
 *_strlen - function
 *
 *@s: pointer
 *Return: index
 */
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
