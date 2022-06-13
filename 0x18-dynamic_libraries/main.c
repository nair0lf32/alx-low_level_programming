#include "main.h"
/**
*_putchar -  print a character
*@c: character to print
*Return: 1
*/
int _putchar(char c){
return (write(1, &c, 1));
}
/**
*_islower -  check if a letter is lowercase
*@c: character to check
*Return: 1 if lowercase, 0 if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
/**
*_isalpha -  check if a letter is alphabetic
*@c: character to check
*Return: 1 if alphabetic, 0 if not
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
/**
*_abs -  print the absolute value of a number
*@n: input number
*Return: absolute value of n
*/
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-n);
}
}
/**
*_isupper -  check if a letter is uppercase
*@c: character to check
*Return: 1 if uppercase, 0 if not
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
#include "main.h"
/**
*_isdigit -  check if input is a digit
*@c: input to check
*Return: 1 if digit, 0 if not
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
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
*_puts -  prints a string
*@str: a pointer to a string
*Return: nothing
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
/**
*_strcpy -  copies a string to the buffer
*@src: pointer to the source string
*@dest: pointer to the destination (buffer)
*Return: pointer to the buffer
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
/**
*_atoi -  converts a string to an integer
*@s: pointer to the source string
*Return: the integer or 0 if empty
*/
int _atoi(char *s)
{
int i, j = 0;
int result = 0;
int sign = -1;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign = sign * -1;
if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result -= (s[i] - '0');
j = 1;
}
else if (j == 1)
{
break;
}
}
result = sign *result;
return (result);
}
/**
*_strcat -  concatenates two strings
*@src: pointer to the source string
*@dest: pointer to the destination string
*Return: pointer to the destination string
*/
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
/**
*_strncat -  concatenates two strings with a limit n of bytes
*and no null byte needed
*@src: pointer to the source string
*@dest: pointer to the destination string
*@n: number of bytes to copy from the source string
*Return: pointer to the destination string
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
/**
*_strncpy -  copies a string
*@src: pointer to the source string
*@dest: pointer to the destination string
*@n: number of bytes to copy from the source string
*Return: pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
/**
*_strcmp -  compares two strings
*@s1: pointer to the first string
*@s2: pointer to the second string
*Return: 0 if the strings are equal, 1 if not
*/
int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
if (s1[i] == '\0')
{
return (-1);
}
return (1);
}
/**
*_memset - fills memory with a constant byte
*@s: pointer to the memory area
*@b: the constant byte
*@n: the number of bytes to be filled
*Return: s, the pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/**
*_memcpy - copies memory area
*@dest: pointer to the destination memory area
*@src: pointer to the source memory area
*@n: the number of bytes to be copied
*Return: the pointer to the destination memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
/**
*_strchr - locates a character in a string
*@s: pointer to string
*@c: character to find
*Return: the address of the first occurrence of c, NULL if not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0); /*NULL*/
}
/**
*_strspn - gets the length of a prefix substring
*@s: pointer to number of bytes in substring
*@accept: pointer to the bytes that are part of the substring
*Return: the length of the prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int c = 0;
char *p = accept;
while (*s++)
{
while (*accept++)
if (*(s - 1) == *(accept - 1))
{
c++;
break;
}
if (!(*--accept))
{
break;
}
accept = p;
}
return (c);
}
/**
*_strpbrk - searches a string for any of a set of byte
*@s: pointer to the string to be searched
*@accept: pointer to the bytes that are to be searched for
*Return: the pointer to the bytes found or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0); /*NULL*/
}
/**
*_strstr - locate a substring
*@haystack: string to be searched (nice one)
*@needle: substring to be searched for
*Return: the beginning of the substring in the string or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
char *x = haystack, *y = needle;
while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (x);
}
needle = y;
x++;
haystack = x;
}
return (0);
}
