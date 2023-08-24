#include "monty.h"

/**
 * f_add - adds the top two elements of the stack
 * @head: top of the stack
 * @counter: line number
 */
void f_add(stack_t **head, unsigned int counter)
{
	int n;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "%d: can't add, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	n = (*head)->n + (*head)->next->n;
	(*head)->next->n = n;
	f_pop(head, counter);
}
