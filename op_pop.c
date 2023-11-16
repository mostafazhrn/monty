#include "monty.h"
/**
 * op_pop - this code shall remove the top element of the stack
 * @stack: this shall represent the ptr to the top of the stack
 * @line_number: this shall represent the number of the opcode
 * Return: it shall return void
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
stack_t *q = *stack;
if (!stack || !*stack)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}
if (q->next)
{
q->next->prev = NULL;
}
*stack = q->next;
free(q);
}
