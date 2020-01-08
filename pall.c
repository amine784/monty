#include "monty.h"
/**
*pall-function that print all args in stack
*@stack: pointer
*@line_number: line instruction
*Return: Always success
**/
void pall(stack_t **stack, unsigned int line_number)
{
(void)(line_number);
stack_t *next = *stack;
if (*stack == NULL)
return;
while (next != NULL)
{
printf("%d\n", (*next).n);
next = (*next).next;
}
}
/**
*pint-function that print the first node
*@stack: pointer
*@line_number: line number
*Return: akways success
**/
void pint(stack_t **stack, unsigned int line_number)
{
(void)(line_number);
if ((stack == NULL) || (*stack == NULL))
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
#include "monty.h"
/**
*push-function that add node
*@stack:pointer to stack
*@nbre_line:line number of instruction
*@n:value node
*Return: always succes
**/
void push(stack_t **stack, char *n, unsigned int nbre_line)
{
stack_t *stck = NULL;
stck = malloc(sizeof(stack_t));
if (stck == NULL)
{
printf("Error: malloc failed\n");
exit(EXIT_FAILURE);
}
if (n == NULL)
{
printf("L%d: usage: push integer\n", nbre_line);
exit(EXIT_FAILURE);
}
(*stck).n = atoi(n);
(*stck).next = NULL;
(*stck).prev = NULL;
if (*stack != NULL)
{
stck->next = *stack;
(*stack)->prev = stck;
}
*stack = stck;
}


