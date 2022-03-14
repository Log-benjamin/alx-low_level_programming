#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			for (x = 48; x <= 57; x++)
			{
				for (y = 48; y  <= 57; y++)
				{
					if ((i + j > x + y) || (x < i) || ( i ==x && j == y))
				{
					continue;
				}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);
					if (i == 57 && j == 56 && x == 57 && y == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
