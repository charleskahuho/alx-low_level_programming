#include"lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
/**
 * print_list - function
 *
 * @h: strings to be printed
 *
 * Return: node number
 *
 */
size_t print_list(const list_l *h)
{
	unsigned int k = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf(" [0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
	return (k);
}
