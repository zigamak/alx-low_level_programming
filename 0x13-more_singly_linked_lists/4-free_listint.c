#include "lists.h"

/**
  * free_listint - Free list from memory.
  * @head: Pointer to head of the list.
  */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != 0)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
