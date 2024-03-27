#include "monty.h"

void pall(int *stack, int n)
{
	int i;

	/**satck not empty**/
	if (n == -1)
	{
		return;
	}

	for (i = n; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}
