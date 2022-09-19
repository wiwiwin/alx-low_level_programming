#include"main.h"
/**
 * _puts - function that prints a string
 * @str: string pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	_putchar('\n');
}
