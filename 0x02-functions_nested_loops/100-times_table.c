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
	
	i = 0;

	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(i * j);
		}
			-putchar('\n');
		i++;
	}
}
