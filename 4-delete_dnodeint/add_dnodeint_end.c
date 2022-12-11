#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at  end of a list
 *
 * @head: The address of  pointer to te first element of the list
 * @n: The number to store in  new element
 *
 * Return: A pointer to  new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *l;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	l = *head;
	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = new;
	new->prev = l;
	return (new);
}
