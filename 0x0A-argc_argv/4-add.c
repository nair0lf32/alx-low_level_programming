#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: the sum, 0 if no arguments, 1 if error
*/
int main(int argc, char *argv[])
{
unsigned int i, sum = 0, nums;
if (argc < 3)
{
printf("%d\n", 0);
return (0);
}
while (argc-- && argc > 0)
{
for (i = 0; argv[argc][i] != '\0'; i++)
{
if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
nums = atoi(argv[argc]);
sum += nums;
}
printf("%d\n", sum);
return (sum);
}
