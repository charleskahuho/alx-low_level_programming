#include<stdlib.h>
#include<stdio.h>
/**
 * main - function
 * @argc: no to add
 * @argv: array
 *
 * Return: defined
 */
int main(int argc, char *argv[])
{
	int f, j, value = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (f = 1; f < argc; f++)
		{
			for (j = 0; argv[f][j]; j++)
			{
				if (argv[f][j] > '0' || argv[f][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					value += atoi(argv[f]);
				}
			}
			printf("%d\n", value);
		}
	}
	return (0);
}
