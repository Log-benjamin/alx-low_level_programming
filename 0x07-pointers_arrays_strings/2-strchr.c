#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @c: input
 * @s: input
 * Return: Pointer dest
 */
char *_strchr(char *s, char c)
{
	int z = 0;
	int k;
	int y;
	int count = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
	}
	while (s[z] != '\0')
	{
		if (s[z] == c)
		{
			break;
		}
		else
		{
			count++;
		}
	}
	for (y = 0; y <= (k + 1) - count; y++)
	{
		if (y == k - count)
		{
			s[y] = '\0';
		}
		else
		{
			s[y] = s[count];
			count++;
		}
	}
	return (s);
}
