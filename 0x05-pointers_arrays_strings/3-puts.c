#include "main.h"
#include <unistd.h>
/**
 * _puts - prints string to stdout
 * @str: value to be evaluated
 *
 * Return: no return.
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
