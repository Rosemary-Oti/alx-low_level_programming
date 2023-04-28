#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
