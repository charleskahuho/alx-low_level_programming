#include"main.h"
/**
 * reverse_array - function
 * @a: array
 * @n: array size
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i;

	int end;

	int tmp;

	end = n - 1;

	for (i = 0; i < n; i++)
	{
			;
	}
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
		end--;
	}

	for (i = 0; i < n; i++)
	{
		;
}

}
