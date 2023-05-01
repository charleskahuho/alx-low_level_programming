<<<<<<< HEAD
#include "lists.h"
/**
  * listint_len - gets the number of nodes in a list
  * @h: singly linked list to print
  * Return: number of nodes in the list
  */
=======
#include"lists.h"
/**
 * listint_len - function
 * @h: singly linked list
 *
 * Return: number of nodes;
 */
>>>>>>> 879ca9c4558c296b1f42c27ed1f5a9636cf7acdc
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
<<<<<<< HEAD
		h = h->next;
=======
	{
		h = h->next;
	}
>>>>>>> 879ca9c4558c296b1f42c27ed1f5a9636cf7acdc
	return (i);
}
