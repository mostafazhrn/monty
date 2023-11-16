#include "monty.h"
/**
 * op_add - this code shall add the top two elements of the stack
 * @stack: this shall represent the ptr to the top of the stack
 * @line_number: this shall represent the number of the opcode
 * Return: it shall return void
 */
void op_add(stack_t **stack, unsigned int line_number)
{
stack_t *a = *stack;
if (!stack || !*stack || !(*stack)->next)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
a->next->n += a->n;
op_pop(stack, line_number);
}
