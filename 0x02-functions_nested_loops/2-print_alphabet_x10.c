#include "main.h"

/**
 * prints 10 timees the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void);
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			print_alphabet_x10(c);
		}
		_putchar('\n');
		return (0);
	
	}
}
