#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - print the last digit of the number stored in the variable 
 *
 * Return: Always(Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n=rand() - RAND_MAX / 2;
	if(n % 10 > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last dight of %i is %d and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last dight of %i is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}





 