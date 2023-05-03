#include "lists.h"

/**
 * add_nodeint - adds a new node to beginning of linked list.
 *
 * @head: pointer to first node in list.
 *
 * @n: data to insert in a new node.
 *
 * Return: return pointer to new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
