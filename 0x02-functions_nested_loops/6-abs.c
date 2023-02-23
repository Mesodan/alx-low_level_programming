#include "main.h"

/**
 * _abs - print absolute value of an integer.
 * @a:parameter to check
 *
 * Return: return the abs value
 */
int _abs(int a)

{
	if (a < 0)
	{
		a = -(a);
	}
	else if (a >= 0)
	{
		a = a;
	}
	return (a);
}
