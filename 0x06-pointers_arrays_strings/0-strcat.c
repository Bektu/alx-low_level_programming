#include "main.h"
/**
* _strcat - appends src to the dest string
* @dest: string to append to src
* @src: string to appent to dest
*
* Return: address ofdest
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = j = 0;
while (*(dest + i)
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
