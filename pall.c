#include "monty.h"

/**
 * pall - main entry point
 * @head: first slack
 *
 * Return: anything
 */

void pall(stack_t **head)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
		return;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h-next;
	}
}
