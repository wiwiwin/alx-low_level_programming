#include<stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: Alawys 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
