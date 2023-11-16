#include "monty.h"
glob_t sthead;
/**
 * op_start - this code shall start header
 *@stack: this shall represent address of stack
 *Return: it hsall return add of stack
 */
void op_start(stack_t **stack)
{
*stack = NULL;
sthead.prime = stack;
}
/**
 *main- this code shall take args
 *@argc: this hsall represent the arg count
 *@argv: this shall represent the args
 *Return: it shall return EXIT_failure if fail
 */
int main(int argc, char *argv[])
{
stack_t *stack;
op_start(&stack);
switch (argc == 2)
{
case 1:
trouve_fiche(argv[1], &stack);
break;
}
fprintf(stderr, "USAGE: monty file\n" );
exit(EXIT_FAILURE);
}
