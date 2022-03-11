#include <stdio.h>
/**
 * Main - Entry Point
 * Return: 0 (after Completion)
 */
/*Main fucntion displays lower and upper chars usinf putchar*/
int main(void)
{
	char L;

	for (L = 'a' ; L <= 'z' ; L++)
	{
		putchar(L);
	}
	for (L = 'A' ; L <= 'Z' ; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
