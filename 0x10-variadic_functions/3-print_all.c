#include "variadic_functions.h"
/**
*print_all - prints anything (like...anything)
*@format: list of types of arguments passed to the function
*Return: nothing
*/
void print_all(const char * const format, ...)
{
    va_list arguments;
    int i = 0;
    char *s;
    int *ip;
    float *fp;
    double *dp;
    while (format && format[i])
    {
        va_start(arguments, format);
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(arguments, int));
                break;
            case 'i':
                ip = va_arg(arguments, int *);
                printf("%d", *ip);
                break;
            case 'f':
                fp = va_arg(arguments, float *);
                printf("%f", *fp);
                break;
            case 's':
                s = va_arg(arguments, char *);
                printf("%s", s);
                break;
            case 'd':
                dp = va_arg(arguments, double *);
                printf("%f", *dp);
                break;
            default:
                break;
        }
        va_end(arguments);
        i++;
        if (format[i])
            printf(", ");
    }
    printf("\n");
}
