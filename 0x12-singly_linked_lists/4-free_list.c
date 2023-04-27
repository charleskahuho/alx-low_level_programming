@include"lists.h"
/**
 * free_list - function
 * @head: linked list
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *blank = head;

	while (head != NULL)
	{
		blank = head;
		free(blank->str);
		free(blank);
		head = head->next
	}
}
