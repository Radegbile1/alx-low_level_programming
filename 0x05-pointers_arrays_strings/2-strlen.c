#include "main.h"

/**
 * _strllen - returns the lenght of a string
 * @s: string
 * Return: returns lenght asd integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len)!='\0')
		len++;

	return (len);
}
