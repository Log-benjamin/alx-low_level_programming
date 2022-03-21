#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: input string
 */
void _puts(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
