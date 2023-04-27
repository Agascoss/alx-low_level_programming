#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node.
 *
 * @head: pointer to the head.
 *
 * @str: string to be duplicated.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
