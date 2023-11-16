#include "monty.h"
/**
 * op_swap - this code shall swap the top two elements of the stack
 * @stack: this shall represent the ptr to the top of the stack
 * @line_number: this shall represent the number of the opcode
 * Return: it shall return void
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
    int auxiliery;
    stack_t *q = *stack;
    if (!stack || !*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    auxiliery = q->n;
    q->n = q->next->n;
    q->next->n = auxiliery;
}
