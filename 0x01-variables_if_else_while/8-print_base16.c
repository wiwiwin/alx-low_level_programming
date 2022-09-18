#include<stdio.h>
/**
 * main - prints all hexadecimal numbers in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);

}
