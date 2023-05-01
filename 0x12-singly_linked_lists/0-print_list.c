#include"lists.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
/**
 * print_list - function
 *
 * @h: strings
 *
 * Return: no of nodes
 *
 *
 */
size_t print_list(const list_t *h)
{
	unsigned int k = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
	return (k);
}
