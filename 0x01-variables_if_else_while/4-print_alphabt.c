#include<stdio.h>
/**
 * main - alphabet in lowercase
 *
 * Return: Always 0(Success)
 */
int main(Void)
{ 
	char c;

	for (c = 'a', c <= 'z', c++)
	{
		while (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
