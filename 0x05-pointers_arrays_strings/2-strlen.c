#include "main.h"

/**
 * _strlen - Returns the lenght of a string.
 * @str: string.
 *
 * Return: length.
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
