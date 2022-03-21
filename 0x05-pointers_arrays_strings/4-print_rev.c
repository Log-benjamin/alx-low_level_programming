#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: input string
 */
void print_rev(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
	{
	}
	z = z - 1;
	while (z >= 0)
	{
	       _putchar(s[z]);
	z--;
       }
	_putchar('\n');
}
