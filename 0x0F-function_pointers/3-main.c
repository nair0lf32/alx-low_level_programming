#include "3-calc.h"
/**
*main - performs simple mathematic operations
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 98, 99 or 100 on error
*/
int main(int argc, char **argv)
{
int num1, num2;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
op_func = get_op_func(argv[2]);
if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((num2 == 0) && ((op_func == op_div) || (op_func == op_mod)))
{
printf("Error\n");
exit(100);
}
printf("%d\n", op_func(num1, num2));
return (0);
}
