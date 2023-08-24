#include "monty.h"

char *arg = NULL;
/**
 * parser - determines the opcodes
 * @str: opcode line in a file
 * @lin_number: number of the opcode line
 * Return: 0 on success and -1 on failure
 */
int parser(char *str, int line_number)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, /**{"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},*/
				{NULL, NULL}
				};
	char *token;
	int i = 0;

	token = strtok(str, " \t\a");
	arg = strtok(NULL, " \t\a");

	while (opst[i].opcode)
	{
		if (strcmp(token, opst[i].opcode) == 0)
		{
			opst[i].f(&top, line_number);
			return (0);
		}
		i++;
	}

	fprintf(stderr, "%d: unknown instruction %s\n", line_number, token);
	return (-1);
}
