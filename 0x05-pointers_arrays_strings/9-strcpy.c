#include "main.h"
/**
*print_array -  prints an array of integers
*@a: a pointer to an array of integers
*@n: the number of elements in the array
*Return: nothing
*/
void print_array(int *a, int n)
{
int inc;
for (inc = 0; inc < n ; inc++)
{
if (inc != n - 1)
printf("%d, ", a[inc]);
else
printf("%d", a[inc]);

}
printf("\n");
}
