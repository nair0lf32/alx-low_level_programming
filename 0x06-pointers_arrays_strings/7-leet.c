#include "main.h"
/**
*leet - encode a string to 1337
*@str: pointer to the string
*Return: pointer to the string 
*/
char *leet(char *str)
{
int i, j;
char *leet[] = {
"aAeEoOtTlL",
"4433007711"
};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet[0][j] != '\0'; j++)
{
if (str[i] == leet[0][j] || str[i] == leet[0][j] - 32)
{
str[i] = leet[2][j];
}
}
}
return (str);
}
