#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - describes if a number is negative zero or positive
 * return - returns the value zero
 */
int main(void)
{
	int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive ", n);}
	else if (n == 0)
	{
		printf("%d is zero ", n);}
	else
	{
		printf("%d is negative ", n);}
	return (0);
}
