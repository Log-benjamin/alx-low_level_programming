#include "main.h"
/**
 * _islower -  checks for lowercase character.
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ( i == c)
			return (1);
	}
	return (0);
}
