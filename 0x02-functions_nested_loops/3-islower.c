#include "main.h"

/**
 * _islower - check if a character is lowercase if YES returns 1
 * otherwise returns 0
 * Return: always 0 if it is a lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);
	else
		return (0);
}
