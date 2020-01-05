#include "monty.h"
/**
* main-the main function
*@argv: char type
*@argc: number of args
*Return: Always success
**/
int main(int argc, char *argv[])
{
FILE *open_File;
stack_t *stack = NULL, *head = NULL;
char *pt_line = NULL, *pcd, *token;
size_t buffer = 0;
unsigned int nbre_line = 1, x;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
open_File = fopen(argv[1], "r");
if (open_File == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
for (; getline(&pt_line, &buffer, open_File) != -1; nbre_line++)
{
pcd = strtok(pt_line, "\n\t\r ");
if ((pcd == NULL || pcd[0] == '#') || (strcmp(pcd, "nop") == 0))
continue;
else if (strcmp(pcd, "push") == 0)
{
token = strtok(NULL, "\n\t\r ");
get_fp(&stack, token, nbre_line);
}
else
fn_helper(&stack, pcd, nbre_line);
}
for (x = 0; stack != NULL; x++)
{
head = stack;
stack = stack->next;
free(head);
}
fclose(open_File);
free(pt_line);
exit(EXIT_SUCCESS);
}
