#include "main.h"
/**
*is_palindrome - check if a string is a palindrome
*@s: the string
*Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
int len = _strlen(s);
return (check_pal(s, len - 1));
}
/**
*_strlen - returns the length of the string
* @s: pointer to string params
* Return: length of string
*/
int _strlen(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen(++s));
}
/**
* check_pal - check if palindrome
* @s: pointer to string
* @c: current character index
* Return: 1 if palindrome, 0 if not
*/
int check_pal(char *s, int c)
{
if (c < 1)
{
return (1);
}
if (*s == *(s + c))
{
return (check_pal(s + 1, c - 2));
}
return (0);
}
