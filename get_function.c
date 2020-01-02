#include "monty.h"
/**
* get_function-function that chek the correct operation.
*@stack:the head of the stack
*@nbre_line: numbre of the actual line of the opcode
*@pcode:char type, the opcode to run
*Return:Always success
**/
void get_function(char *pcode, stack_t **stack, unsigned int nbre_line)
{
instruction_t operation[] = {
{"push", _push},
{"pall", _pall},
{"pint", _pint},
{"pop", _pop},
{"swap", _swap},
{"add", _add},
{"nop", _nop},
{NULL, NULL}
};
int i = 0;
for (; operation[i].opcode != NULL; i++)
if (strcmp(operation[i].opcode, pcode) == 0)
{
operation[i].f(stack, nbre_line);
return;
}
printf("L%d: unknown instruction %s\n", nbre_line, pcode);
exit(EXIT_FAILURE);
}
