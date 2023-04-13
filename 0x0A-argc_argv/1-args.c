#include<stdio.h>
/**
 * main - function
 * @argc: number of arguements
 * @argv: array
 * Descriptio: print the number of arguements passed
 *
 * Return: 0
 */
int main(int argc, __attribute__ ((unused))char *argv[])
{
	--argc;
	printf("%d\n", argc);
	return (0);
}
