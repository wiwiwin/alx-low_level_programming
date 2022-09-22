#include"main.h"
/**
 * _strncpy -> function that copies a string
 * @dest: first string pointer
 * @src: second string pointer
 * @n: integer
 * Return:return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
