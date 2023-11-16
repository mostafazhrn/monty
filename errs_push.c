#include "monty.h"
/**
 * errr - this code shall manage errors for push function
 * @val: this shall represent the value to be pushed
 * @line_number: this shall represent the number of the opcode
 * Return: it shall return the value to be pushed
 */
int errr(char *val, unsigned int line_number)
{
int x = 0;
switch (val == NULL)
{
case 1:
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
break;
}
while (val[x] != '\0')
{
switch (val[x] == '-')
{
case 1:
continue;
break;
}
switch (isdigit(val[x]) == 0)
{
case 1:
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
break;
}
x++;
}
return (atoi(val));
}
