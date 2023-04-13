#include<stdio.h>
/**
 * main - function
 * @argc: no of aruements
 * @argv: array
 *
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number;

	for (number = 0; number < argc; number++)
	{
		printf("%s\n", argv[number]);
	}
	return (0);
}
