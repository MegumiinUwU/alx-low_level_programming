#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer that points to the struct
 * @n: integer in the struct
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *point;

	if (&*head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		point = *head;

		while (point->next != NULL)
		{
			point = point->next;
		}
		point->next = newnode;
	}
	return (*head);
}
