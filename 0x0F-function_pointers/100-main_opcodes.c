#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the opcodes of its own main function
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 or 2 if failure
*/
int main(int argc, char *argv[])
{
int i, size;
int (*address)(int, char **) = main;
unsigned char opcode;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
size = atoi(argv[1]);
if (size < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i <  size; i++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);
if (i == size - 1)
{
continue;
}
printf(", ");
address++;
}
printf("\n");
return (0);
}
