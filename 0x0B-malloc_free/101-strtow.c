#include "main.h"
#include <stdlib.h>
/**
*strtow - splits a string into words
*@str: string to be split
*Return: pointer to the array of words, or NULL
*/
char **strtow(char *str)
{
char **word_array;
int i, j = 0, k = 0, size = 0, words = count(str);
if (words == 0)
return (NULL);
word_array = (char **) malloc(sizeof(char *) * (words + 1));
if (word_array != NULL)
{
for (i = 0; i <= _strlen(str) && words; i++)
{
if ((str[i] != ' ') && (str[i] != '\0'))
size++;
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
word_array[j] = (char *) malloc(sizeof(char) * size + 1);
if (word_array[j] != NULL)
{
while (k < size)
{
word_array[j][k] = str[(i - size) +k];
k++;
}
word_array[j][k] = '\0';
size = k = 0;
j++;
}
else
{
while (j-- >= 0)
free(word_array[j]);
free(word_array);
return (NULL);
}
}
}
word_array[words] = NULL;
return (word_array);
}
else
return (NULL);
}
/**
* count - counts the number of words in str
*@str: string to be used
*Return: number of words
*/
int count(char *str)
{
int i = 0, words = 0;

while (i <= _strlen(str))
{
if ((str[i] != ' ') && (str[i] != '\0'))
{
i++;
}
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
words += 1;
i++;
}
else
{
i++;
}
}
return (words);
}
/**
*_strlen - returns the length of a string
*@s: string to be measured
*Return: length of the string
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
}
return (i);
}
