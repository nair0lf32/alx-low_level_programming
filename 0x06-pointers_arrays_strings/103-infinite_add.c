#include "main.h"
/**
*infinite_add - adds two numbers
*@n1: the first number
*@n2: the second number
*@r: the result (buffer)
*@size_r: the buffer size
*Return: pointer to the result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int limit = 0, i = 0, j = 0, nums = 0;
int num1 = 0, num2 = 0, temp_r = 0;
while (*(n1 + i) != '\0')
{
i++;
}
while (*(n2 + j) != '\0')
{
j++;
}
i--;
j--;
if (j >= size_r || i >= size_r)
{
return (0);
}
while (j >= 0 || i >= 0 || limit == 1)
{
if (i < 0)
{
num1 = 0;
}
else
{
num1 = *(n1 + i) - '0';
}
if (j < 0)
{
num2 = 0;
}
else
{
num2 = *(n2 + j) - '0';
}
temp_r = num1 + num2 + limit;
if (temp_r >= 10)
{
limit = 1;
}
else
{
limit = 0;
}
if (nums >= (size_r - 1))
{
return (0);
}
*(r + nums) = (temp_r % 10) + '0';
nums++;
j--;
i--;
}
if (nums == size_r)
{
return (0);
}
*(r + nums) = '\0';
rev_string(r);
return (r);
}
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
