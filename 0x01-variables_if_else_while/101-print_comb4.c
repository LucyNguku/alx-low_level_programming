#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Returns: 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (ones = '0'; ones <= '9'; ones++)
			{
				if (!((ones == tens) || (tens == hundreds) || (tens                                                     > ones) || (hundreds > tens)))
                                {
                                          putchar(hundreds);
                                          putchar(tens);
					  putchar(ones);
					  if(!(ones == '9' && hundreds == '7' && te                                                               ns == '8'))
                                   }
		          }
		}
	   }
	   putchar('\n');
	   return (0);
}
