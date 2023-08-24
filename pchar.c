#include "monty.h"

/**
 * f_pchar - prints the char equvalent of a number
 * @head: top of the stack
 * @counter: line number
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	int n;
	char ch;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}

	n = (*head)->n;

	if (!(n >= 0 && n <= 127))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		exit(EXIT_FAILURE);
	}
	
	ch = (char)n;
	printf("%c\n", ch);
}
