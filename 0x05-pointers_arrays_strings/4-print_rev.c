#include"main.h"
#include<string.h>
/**
 * print_rev -> function that prints a string in reverse
 * @s: pointers to a string 
 */
void print_rev(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	for (i = n - 1 ; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar('\n');
}
