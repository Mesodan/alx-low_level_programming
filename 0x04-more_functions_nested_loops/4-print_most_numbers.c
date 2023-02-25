#include "main.h"

/**
 * print_most_numbers- print numbers from zero
 * to nine, not including two and four
 * by Mesodan
 */

void print_most_numbers(void)
{
	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		if (!(ch == '2' || ch == '4'))
			_putchar(ch);
	}
	_putchar('\n');
}
