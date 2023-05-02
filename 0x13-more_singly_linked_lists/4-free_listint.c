#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - function
  * @head: describe argument
  * Return: none
  */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
