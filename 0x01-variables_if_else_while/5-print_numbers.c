#include<stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	for (n = '0'; n <= '9'; n++)
	{
		printf(n);
	}
	printf('\n');
	
	return(0);
}

