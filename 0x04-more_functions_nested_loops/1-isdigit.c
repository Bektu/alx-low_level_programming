#include "main.h"
#include <stdio.h>
/**
* _isdigit - checks for digit
* @c: print number
* Return: 1 if int else 0.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
