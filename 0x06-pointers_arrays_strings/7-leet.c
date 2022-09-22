#include "main.h"
/**
 * leet-> function that encodes a string into 1337
 * @s: string pointer
 * Return:string
 */
char *leet(char *s)
{
	int i = 0, j, len = 5;
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = { '4', '3', '0', '7', '1'};

	while (s[a])
	{
		j = 0;

		while (j < len)
		{
			if (s[i] == a[j] || s[i] - 32 == a[j])
				s[i] = b[j];
			j++;
		}
		a++;
	}

	return (s);
}

