#include"main.h"
/**
 *rev_string - function
 *
 *@s: pointer
 *
 *Return: none
 *
 */
void rev_string(char *s)
{
	int k = 0;
	int r = 0;

	while (s[k])
	{
		k++;
	}

	while (--k > r)
	{
		char front = s[r];
		char back = s[k];

		s[r] = back;
		r++;
		s[k] = front;
	}
}
