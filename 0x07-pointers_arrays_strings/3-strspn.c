#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept);
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0; accept != '\0'; i++)
	{
		for (j = 0; s != '\0'; j++)
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
