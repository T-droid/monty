#include "monty.h"

/**
 * f_swap - swaps elements of the stack
 * @head: top of the stack
 * @counter: line number
 */
void f_swap(stack_t **head, unsigned int counter)
{
	int n;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "%d: can't swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	n = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = n;
}
