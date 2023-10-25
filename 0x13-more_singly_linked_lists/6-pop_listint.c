#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer to the head node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
