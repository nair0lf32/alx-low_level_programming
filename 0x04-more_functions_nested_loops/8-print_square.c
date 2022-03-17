#include "main.h"
/**
*print_square -  print a square of given size
*@size: the size of the square
*Return: nothing
*/
void print_square(int size)
{
while (size-- > 0)
{
_putchar('#' * size);
}
}
