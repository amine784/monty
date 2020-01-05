#include "monty.h"
/**
* fn_helper-function that fetch the correct operation
*@stack:the head of stack or queue
*@pcd:functino to fetch
*@nbre_line: in which line
*Return:Always success
**/
int fn_helper(stack_t **stack, char *pcd, unsigne int nbre_line)
{
instruction_t operation[] = {{"pint", pint}, {"pall", pall}, {NULL, NULL}};
int i = 0;
  /**
for (; operation[i].opcode; i++)
{
if (strcmp(operation[i].opcode, pcd) == 0)
{
(operation[i].f)(stack, nbre_line);
exit(EXIT_SUCCESS);
}
}
dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", nbre_line, pcd);
exit(EXIT_FAILURE);
}
**/
