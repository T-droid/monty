#include "monty.h"

/**
 * f_pint - prints data on top of the stack
 * @head: top of the stack pointer
 * @number: line number of the bytecode
 */
void f_pint(stack_t **head, unsigned int number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "%d: can't pint, stack empty\n", number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
