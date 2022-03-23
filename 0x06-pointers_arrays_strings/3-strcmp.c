#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer input string.
 * @s2: pointer input string.
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		sum1 = sum1 + ((int)(s1[i] - '0'));
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		sum2 = sum2  + ((int)(s2[j] - '0'));
	}
	if (sum1 > sum2)
		return (15);
	else if (sum1 == sum2)
		return (0);
	else
		return (-15);
}
