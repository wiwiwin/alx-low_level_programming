#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 *main - prints random number to variable
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_Max / 2;
	if (n % 10 > 5)
	{
		printf("%s%i is %i and is", str, n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}