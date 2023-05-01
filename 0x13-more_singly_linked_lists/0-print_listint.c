<<<<<<< HEAD
#include <stdio.h>
#include "lists.h"
/**
  * print_listint - prints all elements of a list_t list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
=======
#include<stdio.h>
#include"lists.h"
/**
 * print_listint - function
 * @h: sinly linked lists
 *
 * Return: number of nodes
 *
 */
>>>>>>> 879ca9c4558c296b1f42c27ed1f5a9636cf7acdc
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
