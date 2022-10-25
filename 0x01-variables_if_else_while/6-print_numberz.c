#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 0;
	while
		(c <= 9)
		{
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}
