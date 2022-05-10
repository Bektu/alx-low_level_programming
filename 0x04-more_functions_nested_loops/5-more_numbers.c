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
for (i = 48; i <=58; i++)
{
for (j = 48; j <= 63; j++)
putchar(i);
}
putchar('\n');
}
}
