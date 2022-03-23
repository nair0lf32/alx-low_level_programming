#include "main.h"
/**
*leet - encode a string to 1337
*@str: pointer to the string
*Return: pointer to the encoded string
*/
char *leet(char *str)
{
int i=0, j;
char characters[8] = {'O', 'L', '_', 'E', 'A', '_', '_', 'T'};
while (str[++i])
{
for (j = 0; j <= 7; j++)
{
if ( ( str[i] == characters[j] ) || ( str[i] - 32 == characters[j] ) )
{
str[i] = j + '0';
}
}
}
return (str);
}
