#include "monty.h"

void push(int value)
{
	extern int n = -1;
	extern int stack[LIMIT];

	if (n == LIMIT - 1)
	{
		printf("stack overflow\n");
		exit(EXIT_FAILURE);
	}

	stack[++top] = value;
}
