#include "main.h"
/**
* _strcpy - copies the string pointed to by src, including terminatingnull
* byte (\0), to the buffer pointed to by dest
*@src: string
*@dest: buffer pointer
* Return: void
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
