#include "main.h"
/**
*main -  print text
*Return: 0
*/
int main(void)
{
char text_to_print[8] = "_putchar";
int i;
for (i = 0; text_to_print[i] != '\0'; i++)
{
putchar(text_to_print[i]);
}
return (0);
}
