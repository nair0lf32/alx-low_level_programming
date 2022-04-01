#include <stdio.h>
/**
*main - multiplies two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 if success, 1 if error
*/
int main(int argc, char *argv[])
{
int i, num = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
{
num *= atoi(argv[i]);
}
printf("%d\n", num);
return (0);
}
