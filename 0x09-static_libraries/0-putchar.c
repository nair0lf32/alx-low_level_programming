#include "main.h"
/**
*main -  print text
*Return: 0
*/
int main(void)
{
char text_to_print[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(text_to_print[i]);
}
_putchar('\n');
return (0);
}
