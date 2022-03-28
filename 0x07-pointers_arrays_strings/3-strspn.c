#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
