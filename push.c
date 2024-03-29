#include "monty.h"

/**
 * push - main entry point
 * @heads: first node
 * @count: variable
 */

void push(stack_t **head, unsigned int count)
{
	int i, index = 0, flag = 0;

	/** checking if bus in NULL **/
	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			index++;
		for (i = 0; bus.arg != '\0'; i++)
		{
			if (bus.arg[i] >57 || bus.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.ile);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}

