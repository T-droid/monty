#include "monty.h"

/**
 * f_sub - subracts the top element from the second
 * @head: top of the stack
 * @counter: line number
 */
void f_sub(stack_t **head, unsigned int counter)
{
	int n;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "%d: can't sub, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	n = (*head)->next->n - (*head)->n;
	(*head)->next->n = n;
	f_pop(head, counter);
}
