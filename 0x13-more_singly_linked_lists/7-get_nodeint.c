#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: parameter
 * @index: parameter
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; node != NULL && i < index; i++)
	{
		node = node->next;
	}

	return (i == index ? node : NULL);
}
