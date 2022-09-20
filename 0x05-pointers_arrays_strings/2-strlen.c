#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: returns lenght as integer
 */

	int  _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
