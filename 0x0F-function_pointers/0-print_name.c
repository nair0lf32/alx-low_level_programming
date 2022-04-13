#include "function_pointers.h"
/**
*print_name - does what it says
*@name: name to print (string)
*@f: function to print (pointer to function)
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name == '\0' || f == '\0')
{
return;
}
f(name);
}
