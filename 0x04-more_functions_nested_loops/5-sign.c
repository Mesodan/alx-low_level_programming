#include "main.h"
/**
 * print_sign - print signs of number
 * by Mesodan
 * return:1 when greater than zero
 * and -1 when less than zero
 * 0 when equal zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
