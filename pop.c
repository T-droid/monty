#include "monty.h"

/**
 * f_pop - pops node of the stack
 * @head: top of the stack
 * @counter: line number
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *ptr = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "%d: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	*head = (*head)->next;
	ptr->next = NULL;
	free(ptr);
}
