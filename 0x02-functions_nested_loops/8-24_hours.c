#include "main.h"
/**
 * jack_bauer - print every minute of day of Jack
 *
 * Return: 0 always
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0 ; i <= 2 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			for (k = 0 ; k <= 5 ; k++)
			{
				for (m = 0 ; m <= 9 ; m++)
				{
					if (i == 2 && j > 3)
					{break;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}

