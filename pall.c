#include "monty.h"

 /**
  * pall - main entry point
  * @head: first node in stack
  *
  * Return: nothing
  */
void pall(stack_t **head)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
