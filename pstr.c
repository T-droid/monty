#include "monty.h"

/**
 * f_pstr - prints string represented by the stack data
 * @head: top of the stack
 * @counter: line number
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	int n;
	char ch;
	stack_t *h = *head;
	(void)counter;

	while (h != NULL)
	{
		n = h->n;
		if (!(n > 0 && n <= 127))
			break;
		ch = (char)n;
		printf("%c", ch);
		h = h->next;
	}
	printf("\n");
}
