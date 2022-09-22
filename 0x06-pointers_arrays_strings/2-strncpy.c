#include"main.h"
#include<string.h>
/**
 * _strncpy -> function that copies a string
 * @dest: first string pointer
 * @src: second string pointer
 * @n: integer
 * Return:return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
