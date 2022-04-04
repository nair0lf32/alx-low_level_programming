#include "main.h"
#include <stdlib.h>
/**
*strtow - splits a string into words
*@str: string to be split
*Return: pointer to the array of words, or NULL
*/
char **strtow(char *str)
{
char **words;
int i, j = 0, k = 0, len = 0, word_count = count(str);

if (word_count == 0)
return (NULL);
words = (char **) malloc(sizeof(char *) * (word_count + 1));
if (words != NULL)
{
for (i = 0; i <= _strlen(str) && word_count; i++)
{
if ((str[i] != ' ') && (str[i] != '\0'))
len++;
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
words[j] = (char *) malloc(sizeof(char) * len + 1);
if (words[j] != NULL)
{
while (k < len)
{
words[j][k] = str[(i - len) +k];
k++;
}
words[j][k] = '\0';
len = k = 0;
j++;
}
else
{
while (j-- >= 0)
free(words[j]);
free(words);
return (NULL);
}
}
}
words[word_count] = NULL;
return (words);
}
else
return (NULL);
}
/**
*count - counts the number of words in str
*@str: string to be counted
*Return: number of word_count
*/
int count(char *str)
{
int i = 0, word_count = 0;
while (i <= -_strlen(str))
{
if ((str[i] != ' ') && (str[i] != '\0'))
{
i++;
}
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
word_count += 1;
i++;
}
else
{
i++;
}
}
return (word_count);
}
/**
*_strlen - returns length of str
*@s: string to be measured
*Return: length of str
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
