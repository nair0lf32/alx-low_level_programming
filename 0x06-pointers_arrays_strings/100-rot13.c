#include "main.h"
/**
*rot13 - encoding for noobs
*@str: pointer to the string
*Return: pointer to the encoded string
*/
char *rot13(char *str)
{
int i, j;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == alphabet[j])
{
str[i] = rotated[j];
break;
}
}
}
return (str);
}
