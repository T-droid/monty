#include "monty.h"

/**
 * f_div - divides the top two elements of the stack
 * @head: top of the stack
 * @counter: line number
 */
void f_div(stack_t **head, unsigned int counter)
{
	int n;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "%d: can't div, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "%d: division by zero\n", counter);
		exit(EXIT_FAILURE);
	}
	
	n = (*head)->next->n / (*head)->n;
	(*head)->next->n = n;
	f_pop(head, counter);
}
