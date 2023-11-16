#include "monty.h"
/**
 * op_pint - this code shall print the value at the top of the stack
 * @stack: this shall represent the ptr to the top of the stack
 * @line_number: this shall represent the number of the opcode
 * Return: it shall return void
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
if (!stack || !*stack)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
