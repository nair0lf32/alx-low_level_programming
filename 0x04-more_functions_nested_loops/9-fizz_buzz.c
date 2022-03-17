#include <stdio.h>
/**
* main - Fizz-Buzz
* Return: 0
*/
int main(void)
{
int number = 1;
while (number <= 100)
{
if (number % 3 == 0 && number % 5 == 0)
{
printf("FizzBuzz ");
}
else if (number % 3 == 0)
{
printf("Fizz ");
}
else if (number % 5 == 0)
{
if (number == 100)
{
printf("Buzz");
}
else if (number != 100)
{
printf("Buzz ");
}
}
else
{
printf("%d ", number);
}
number++;
}
printf("\n");
return (0);
}
