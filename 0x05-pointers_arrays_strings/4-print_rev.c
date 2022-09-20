#include"main.h"
#include<string.h>
/**
 *print_rev - function that prints a string in reverse 
 *@s: string pointer 
 *Return: 
 */
void print_rev(char *s)
{
	char temp;
	int i, end, len;

	len = strlen(s);
	end = len - 1;
	for (i = 0; i < end ; i++)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
		end--;
	}
	_putchar(s);
	_putchar('\n');
}
