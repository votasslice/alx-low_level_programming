#include "main.h"

/**
 * _puts - prints string
 * @str:input string.
 *
 * Return: no return.
 */

void _puts(char *str)
{
	int i = 0;

	while (count >=0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
