#include "main.h"
#include <stdio.h>
/**
* print_most_numbers -prints given numbers.
*
* Return: 0 always.
*/
void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i == 50 && i == 52)
{
}
else
putchar(i);
putchar('\n');
}
}
