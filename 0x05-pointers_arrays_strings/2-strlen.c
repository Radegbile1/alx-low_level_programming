#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string to evaluate
 * Return: returns length of thr string;
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while ((s[i]) ! = '\0')
	{
		i++;
	}
return(i);
}
