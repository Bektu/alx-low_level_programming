#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number;
int j;
for (number = 48; number <= 56; number++)
{
for (j = 49; j <= 57; j++)
{
putchar(number);
putchar(j);
putchar(',');
putchar(' ');
}
if (number == 57 && j == 57)
{
break;
}
else if (number == j)
{
break;
}
putchar('\n');
}
return (0);
}
