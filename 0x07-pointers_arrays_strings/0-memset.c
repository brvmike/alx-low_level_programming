#include "main.h"

/**
 * *_memset(char *s, char b, unsigned int n) - a function that fills memory with a constant byte
 * return a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char* ptr = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
