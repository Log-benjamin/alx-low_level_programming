#include "main.h"
/**
 * print_times_table - a function that prints the n times table, starting with 0
 * @n: takes in an integer 
 * void:have no return value
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	i = 0;

	if (n > 15 || n < 0)
		return;
	else
	{
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			_putchar(k + '0');
		}
			_putchar('\n');
		i++;
	}
}
}
