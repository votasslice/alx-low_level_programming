#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 * @s: string.
 * Return: length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
