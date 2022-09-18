#include<stdio.h>
/**
 * main- prints all possible combinations of single-digit numbers
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; c <= '9'; i++)
	{
		putchar(c);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
