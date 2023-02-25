#include "main.h"

/**
 * print_line- draw a straight line in the
 * terminal
 * by Mesodan
 * @n: number of times d chara _ should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = 1 ; j <= n ; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
