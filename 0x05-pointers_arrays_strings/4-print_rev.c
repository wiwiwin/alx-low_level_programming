#include"main.h"
#include<string.h>
/**
 * print_rev -> function that prints a string in reverse
 * @s:string pointer
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = n - 1 ; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar('\n');
}
