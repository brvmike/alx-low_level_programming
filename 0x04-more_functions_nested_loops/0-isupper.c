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
	char uppercase = 'A';
	int i = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		/* refer int c*/
		if (c == uppercase)
		{
			i = 1;
			break;
		}
	}
	return (i);
}
