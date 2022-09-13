#include<stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		printf("%i", i);
	}
	printf('\n');

	return (0);
}

