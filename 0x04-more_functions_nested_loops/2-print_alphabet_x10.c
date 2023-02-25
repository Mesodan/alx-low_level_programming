#include "main.h"
/**
 * print_alphabet_x10 - print lowercase ten times
 * by Mesodan
 * return: Always 0
 */
void print_alphabet_x10(void)
{
	int count;
	char ch;

	for (count = 1 ; count <= 10 ; count++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
