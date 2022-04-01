#include <stdio.h>
/**
*main - prints all arguments passed to this program
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

