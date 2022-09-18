#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabets in reverse,
 * follwed by a new line
 *
 * return: 0 always
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
