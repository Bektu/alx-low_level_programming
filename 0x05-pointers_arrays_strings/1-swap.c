#include "main.h"
/**
* swap_int - a function that swaps the values
* @a: integer number 1;
* @b: integer number 2;
* Return: Always 0.
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
return (0);
}
