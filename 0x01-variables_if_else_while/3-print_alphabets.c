#include <stdio.h>
/**
 * Main - Entry Point
 * Main - function displays the charcterrs in lower and uppr case
 * using the putchar function.
 * Return: 0 (after Completion)
 */
/*Task two*/
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
