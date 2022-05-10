#include "main.h"
#include <stdio.h>
/**
* more_numbers -prints given numbers.
*
* Return: 0 always.
*/
void more_numbers(void)
{
int i = 0 ;
int j;
while (i < 10)
{
for (j = 48; i <= 63; i++)
{
if (i == 50 || i == 52)
{
}
else
putchar(i);
}
putchar('\n');
}
}
