#include "lists.h"
#include<stdlib.h>
/**
  * print_listint_safe - function
  * @head:pointer
  * Return: 0
  */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_p = head, *fast_p = head;

	size_t i = 0;

	int is_loop = 0;

	while (slow_p && fast_p && fast_p->next)
	{
		if (!(fast_p->next->next))
			break;
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			slow_p = slow_p->next;
			is_loop = 1;
			break;
		}
	}
	if (!is_loop)
	{
		while(head)
		{
			 i++;
			 printf("[%p] %d\n", (void *)head, head->n);
			 head = head->next;
		}
		return (i);
	}
	while (head)
	{
		i++;
		if (head == slow_p)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
