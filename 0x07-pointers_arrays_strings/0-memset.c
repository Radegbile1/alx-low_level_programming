#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory to be filled
 * @b: character to copy
 * @n: numbers of byte to be used
 * Return: returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
	}
	return (s);
}
