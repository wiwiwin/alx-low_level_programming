#include "main.h"
/**
 * prints 10 timees the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	print_alphabet_x10();

	char c;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_printchar(c);
		}
		_printchar('\n')
		return (0);
	}
}
