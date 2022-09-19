#include"main.h"
/**
 * int _strlen- a function that returns the length of a string
 * @s: string pointer 
 *Retern; length of a string 
 */
int _strlen(char *s)
{
	int len;

	while(*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
