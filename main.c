#include "monty.h"

stack_t *top = NULL;

/**
 * main - entry point
 * @av: array of commandline arguments
 * @ac: argument count
 * Return: always 0
 */
int main(int ac, char **av)
{
    int line_number = 1;
    char line[1024];
    FILE *file;

    if (ac != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    file = fopen(av[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", av[1]);
        exit(EXIT_FAILURE);
    }
    while (fgets(line, sizeof(line), file) != NULL)
    {
        size_t read = strlen(line);
        if (read > 0 && line[read - 1] == '\n')
        {
            line[read - 1] = '\0';
            read--;
        }
        if (parser(line, line_number) == -1)
        {
            fclose(file);
            exit(EXIT_FAILURE);
        }
        line_number++;
    }

    fclose(file);
    return (0);
}

