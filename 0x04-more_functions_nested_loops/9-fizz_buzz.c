#include<stdio.h>
/**
 *main - function
 *
 *Return: none
 */
void main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (i % 5)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			printf(" ");
	}
	printf("\n");
}
