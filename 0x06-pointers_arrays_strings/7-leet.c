#include "main.h"
/**
*leet - encode a string to 1337
*@str: pointer to the string
*Return: pointer to the encoded string
*/
char *leet(char *str)
{
int i,j;
char characters[] = "ol_ea__t";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; characters[j] != '\0'; j++)
{
if (str[i] == characters[j] || str[i] == (characters[j] - 32))
{
str[i] = j + '0';
}
}
}
return (str);
}
