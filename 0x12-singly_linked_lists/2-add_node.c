#include<stddef.h>
#include<stdlib.h>
#include"lists.h"
#include<stdio.h>
/**
 * add_note - function
 * @head: array
 * @str: character
 * Return: defined
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int length, index = 0;
	char *dupstr;

	dupstr = strdup(str);
	while (*str)
	{
		index++;
		str++;
	}
	length = index;
	if (dupstr == NULL)
		return (NULL);
	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = dupstr;
	newNode->len = length;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
