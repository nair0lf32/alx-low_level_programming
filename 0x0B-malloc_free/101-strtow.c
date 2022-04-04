#include "main.h"
#include <stdlib.h>
/**
*strtow - splits a string into words
*@str: string to be split
*Return: pointer to the array of words, or NULL
*/
char **strtow(char *str)
{
int i = 0, j = 0, k = 0;
int len = 0, count = 0;
char **words, *column;
if (!str || !*str)
{
return (NULL);
}
while (*(str + i))
{
if (*(str + i) != ' ')
{
if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
{
count += 1;
}
}
i++;
}
if (count == 0)
{
return (NULL);
}
count += 1;
words = malloc(sizeof(char *) * count);
if (!words)
{
return (NULL);
}
i = 0;
while (*str)
{
while (*str == ' ' && *str)
{
str++;
}
len = 0;
while (*(str + len) != ' ' && *(str + len))
{
len += 1;
}
len += 1;
column = malloc(sizeof(char) * len);
if (!column)
{
for (k = j - 1; k >= 0; k--)
{
free(words[k]);
}
free(words);
return (NULL);
}
for (k = 0; k < (len - 1);  k++)
{
*(column + k) = *(str++);
}
*(column + k) = '\0';
*(words + j) = column;
if (j < (count - 1))
{
j++;
}
}
*(words + j) = NULL;
return (words);
}
