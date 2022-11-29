#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: head of a list
 * @index: the index of a node
 *
 * Return: nth node. if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index && head != NULL; k++)
	{
		head = head->next;
	}

	return (head);
}
