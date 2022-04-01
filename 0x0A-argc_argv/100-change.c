#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the minimum change for some money
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 if success, 1 if error
*/
int main(int argc, char *argv[])
{
int money, change = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
money = atoi(argv[1]);
while (money > 0)
{
change++;
if ((money - 25) >= 0)
{
money -= 25;
continue;
}
if ((money - 10) >= 0)
{
money -= 10;
continue;
}
if ((money - 5) >= 0)
{
money -= 5;
continue;
}
if ((money - 2) >= 0)
{
money -= 2;
continue;
}
money--;
}
printf("%d\n", change);
return (0);
}
