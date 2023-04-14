#include<stdio.h>
#include<stdlib.h>
/**
 * main - function
 * @argc: no of times passed
 * @argv: array
 *
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int a, value = 1;

	if (argc == 3)
	{
		for (a = 1; a < argc; a++)
		{
			value *= atoi(argv[a]);
		}
		printf("%d\n", value);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


