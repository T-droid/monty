#include "monty.h"

/**
 * f_mod - computes the rest of the division
 * @head: top of the stack
 * @counter: line number
 */
void f_mod(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "%d: can't mod, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "%d: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n = (*head)->next->n % (*head)->n;
	f_pop(head, counter);
}
