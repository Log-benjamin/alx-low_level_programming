#include <stdio.h>
/**
 * Main - Entry Point
 *
 * Return: Always 0 (Sucess)
 */
/*Task 3*/
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
