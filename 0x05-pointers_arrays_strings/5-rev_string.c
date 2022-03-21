#include "main.h"
/**
 * rev_string -  a function that reverses a string.
 * @s: pointer variable
 */
void rev_string(char *s)
{
	int l = 0;
	int r = 0;
	char temp;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	while (l > r)
	{
		tmp = s[r];
		s[r] = s[l];
		s[l] = tmp;
		l--;
		r++;
	}
}
