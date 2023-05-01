#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: parameter
 * @index: parameter
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *sofia = head;

	while (sofia && i < index)
	{
		sofia = sofia->next;
		i++;
	}
	return (sofia ? sofia : NULL);
}
