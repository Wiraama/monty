#include "monty.h"

/**
 * push _ maint entry point
 * @head: first node
 * @count: counts number f arguments
 */

void push(stack_t **head, unsigned int count)
{
	int i, index = 0, flag = 0;

	/** checking if bus in NULL **/
	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			index++;
		for (; bus.arg != '\0'; index++)
		{
			if (bus.arg[index] > 57 || bus.arg[index] < 48)
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

