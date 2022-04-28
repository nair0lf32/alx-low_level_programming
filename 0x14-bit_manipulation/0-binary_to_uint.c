#include "main.h"
/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: pointer to a string of bits
*Return: the converted number or 0 if error
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int converted = 0;
if (!b)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
converted = 2 * converted + (b[i] - '0');
}
return (converted);
}
