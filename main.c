#include "monty.h"
/**
* main-main programm to interprete bytecode
*@argc:int type argc is the  number of argc
*@argv:char type
*Return: Always success
**/
int main(argc, char *argv[])
{
FILE *open_File;
int nbre_line = 1;
char *pt_line = NULL;
size_t buffer = 0;
char *pcode;
stack_t *stack NULL;
if ((argc < 2) || (argc > 2))
{
printf("USAGE: monty file\n");
exit(EXIT_FAILURE);
}
open_File = fopen(argv[1], "r")
if (open_File == NULL)
{
printf("Error: Can't open file %s\n", argv[1])
exit(EXIT_FAILURE)
}
for (; getline(&pt_line, &buffer, open_File) != -1; nbre_line++)
{
pcode = strtok(pt_line, "\n\t\r");
if (pcode != NULL && pcode[0] != "#")
{
get_function(pcode, &stack, nbre_line)
free(pt_line)
fclose(open_File)
}
}
return (1);
}
