#include "monty.h"


/**
 * f_push - pushes data onto the stack
 * @head: top of the stack
 * @counter: line number
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n;
	char *str;
	(void)head;

	if (arg == NULL)
	{
		fprintf(stderr, "%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}
	str = arg;
	while (*str != '\0')
	{
		if (!isdigit(*str))
		{
			fprintf(stderr, "%d: usage: push integer\n", counter);
			exit(EXIT_FAILURE);
		}
		str++;
	}
	n = atoi(arg);
	addnode(n);
}
/**
 * addnode - adds a node with data to the list
 * @data: data to be pushed to the linked list
 * Return: void
 */
stack_t *addnode(int data)
{
	stack_t *ptr;

	ptr = malloc(sizeof(stack_t));
	if (ptr == NULL)
		return (NULL);
	ptr->prev = NULL;
	ptr->next = top;
	ptr->n = data;
	top = ptr;

	return (top);
}

/**
 * f_pall - prints the stack
 * @head: stack top
 * @counter: line number
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
