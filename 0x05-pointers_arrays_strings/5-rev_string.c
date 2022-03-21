#include "main.h"
/**
*rev_string -  reverses a string
*@s: a pointer to a string
*Return: nothing
*/
void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
}
/**
*_strlen -  determine the length of a string
*@s: a pointer to a string
*Return: the length of the string
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
*swap_char -  swap the value of two characters
*@a: a pointer to a character
*@b: a pointer to another character
*Return: nothing
*/
void swap_char(char *a, char *b)
{
char temp;
temp = *a;
*a = *b;
*b = temp;
}
