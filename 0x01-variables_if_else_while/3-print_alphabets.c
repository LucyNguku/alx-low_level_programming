#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper case
 *
 * Return: Always (0) 
 */
int main(void)
{
	int ch = 'a';
	int ch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
