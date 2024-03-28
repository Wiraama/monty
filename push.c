#include "monty.h"

void push(slack_t **head, int args)
{
	slack_t *h;

	if ((args == NULL) || args != (int)args)
	{
		printf("L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}

	*head = h->n;
	h = *head;
}
