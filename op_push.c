#include "monty.h"
/**
 * op_push - this code shall push an element to the stack
 * @stack: this shall represent the ptr to the top of the stack
 * @line_number: this shall represent the number of the opcode
 * Return: it shall return void
 */
void op_push(stack_t **stack, unsigned int line_number)
{
    stack_t *node_nuevo;
    char *val;
    int operate;
    node_nuevo = malloc(sizeof(stack_t));
    if (node_nuevo == NULL)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    val = strtok(NULL, " \n\t");
    operate = errr(val, line_number);
    node_nuevo->n = operate;
    node_nuevo->next = *stack;
    node_nuevo->prev = NULL;
    if (*stack != NULL)
    {
        (*stack)->prev = node_nuevo;
    }
    *stack = node_nuevo;
    node_nuevo->n = operate;
    *stack = node_nuevo;
}
