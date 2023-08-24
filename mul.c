#include "monty.h"

/**
 * f_mul - multiplies the second top element of the stack with top
 * @head: top of the stack
 * @counter: line number
 */
void f_mul(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "%d: can't mul, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n = (*head)->next->n * (*head)->n;
	f_pop(head, counter);
}
