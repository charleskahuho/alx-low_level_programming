#include"main.h"
/**
 * leet - function
 * @ : parameter
 *
 * Return: *
 */
char *leet(char *)
{
	int i, j;

	char alpha[] = "AEOTLaeotl";
	char numb[] = "4307143071";

	for (i = 0; *[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		if (*[i] == alpha[j])
		{
			*[i] = numb[j];
			/*break;*/
		}
	}
	return (*);
}
