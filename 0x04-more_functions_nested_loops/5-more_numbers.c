#include "main.h"
/**
 * more_numbers- print ten times the numbers
 * from zero to fourteen
 * by Mesodan
 * return: Always 0
 */

void more_numbers(void)
{
	int count;
	int ch;

	for (count = 1 ; count <= 10 ; count++)
	{
		for (ch = 0 ; ch <= 14 ; ch++)
		{
			if (ch >= 10)
				_putchar('1');
			_putchar(ch % 10 + '0');
		}
		_putchar('\n');
	}
}
