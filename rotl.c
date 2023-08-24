#include "monty.h"

/**
 * f_rotl - rotates the stack at the top
 * @head: top of the stack
 * @counter: line number
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *ptr = *head, *temp;
	(void)counter;

	if (*head == NULL || (*head)->next == NULL)
		return;
	temp = (*head)->next;
	temp->prev = NULL;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = *head;
	(*head)->next = NULL;
	(*head)->prev = ptr;
	(*head) = temp;
}
