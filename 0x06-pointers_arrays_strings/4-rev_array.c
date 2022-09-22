#include"main.h"
/**
 * reverse_array -> function that reverses the content of an arry of integers
 * @a:first integer pointer
 * @n:number of array
 */
void reverse_array(int *a, int n)
{
	int tmp, *p, i, j;

	for (i = 0; i < n; i++)
	{
		p++;
	}
	for (j = 0; j < n / 2; j++)
	{
		tmp = a[j];
		a[j] = *p;
		*p = tmp;
		p--;
	}
}
