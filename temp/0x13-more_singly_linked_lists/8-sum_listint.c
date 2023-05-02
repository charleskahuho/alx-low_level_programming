#include "lists.h"
/**
  * sum_listint - function
  * @head: pointer to the head
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
