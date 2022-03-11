#include <stdio.h>
/**
 * Main - Entry Point
 * Return: 0 (after Completion)
 */
/*Task 3*/
int main(void)
	/*Main function displays lower and upper chars using putchar */
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
