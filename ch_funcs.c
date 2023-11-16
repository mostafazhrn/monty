#define _GNU_SOURCE
#include "monty.h"
/**
 * funcs - this code shall select the function to use
 * @stack: this shall represent the ptr to the top of the stack
 * @line_number: this shall represent the number of the opcode
 * @cmnd: this shall represent the command to be used
 * Return: it shall return void
 */
void funcs(stack_t **stack, unsigned int line_number, char *cmnd)
{
instruction_t fun[] = {
{"pint", op_pint}, {"push", op_push}, {"pall", op_pall},
{"pop", op_pop}, {"swap", op_swap}, {"add", op_add},
{"nop", op_nop}, {NULL, NULL}
};
int x = 0;
while (fun[x].opcode != NULL)
{
switch (strcmp(fun[x].opcode, cmnd) == 0)
{
case 1:
fun[x].f(stack, line_number);
return;
break;
}
x++;
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, cmnd);
exit(EXIT_FAILURE);
}
/**
 * trouve_fiche - this code shall manage the path of function in use
 * @pth: this shall represent the path of the file
 * @stack: this shall represent the ptr to the top of the stack
 * Return: it shall return void
 */
void trouve_fiche(char *pth, stack_t **stack)
{
FILE *fiche;
char *line = NULL;
size_t len = 0;
ssize_t read;
unsigned int line_number = 0;
char *cmnd;
fiche = fopen(pth, "r");
switch (fiche == NULL)
{
case 1:
fprintf(stderr, "Error: Can't open file %s\n", pth);
exit(EXIT_FAILURE);
break;
}
while ((read = getline(&line, &len, fiche)) != -1)
{
line_number++;
cmnd = strtok(line, " \n\t");
if (cmnd == NULL || cmnd[0] == '#')
continue;
funcs(stack, line_number, cmnd);
}
fclose(fiche);
free(line);
exit(1);
}
