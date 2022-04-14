#include "variadic_functions.h"
/**
*print_strings - prints strings
*@separator: separator (char or string)
*@n: number of arguments (strings)
*Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
va_start(valist, n);
for (i = 0; i < n; i++)
{
printf("%s", va_arg(valist, char *));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(valist);
printf("\n");
}
