#include "main.h"
#include <stdlib.h>
/**
*main - multiplies two positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 if success
*/
int main(int argc, char *argv[])
{
int i, j;
if (argc != 3)
{
_puts("Error");
exit(98);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
_puts("Error");
exit(98);
}
}
}
print_number(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');
return (0);
}
/**
*_puts -  prints a string
*@str: a pointer to a string
*Return: nothing
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
/**
*print_number - prints an integer
*@n: the integer to print
*Return: nothing
*/
void print_number(int n)
{
unsigned int number = n;
if (n < 0)
{
_putchar('-');
number = -number;
}
if ((number / 10) > 0)
{
print_number(number / 10);
}
_putchar((number % 10) + '0');
}
/**
*_atoi -  converts a string to an integer
*@s: pointer to the source string
*Return: the integer or 0 if empty
*/
int _atoi(char *s)
{
int i, j = 0;
int result = 0;
int sign = -1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign = sign * -1;
if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result -= (s[i] - '0');
j = 1;
}
else if (j == 1)
{
break;
}
}
result = sign *result;
return (result);
}
