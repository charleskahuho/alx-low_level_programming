#include"lists.h"
#include<stddef.h>
#include<stdio.h>
/**
 * list_len - function
 * @h: number of stringsto count
 *
 * Return: string count
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

