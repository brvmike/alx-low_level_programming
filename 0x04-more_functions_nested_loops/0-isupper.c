#include "main.h"
#include <stdio.h>

/**
 * _isupper - Entry point
 * Description: checks if a character is uppercase
 * @c: the integer value is receives
 * Return: 1 if true. 0 if fales
 */

int _isupper(int c)
{
	int i = 'A';

	for (i = 'A'; i <= 'Z'; i++;)
	{
		/* refer int c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
