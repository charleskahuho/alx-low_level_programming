#include"main.h"
/**
 *_strcpy - function
 *_strcpy - function
 *@src: pointer
 *@dest: pointer
 *Rerurn: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
