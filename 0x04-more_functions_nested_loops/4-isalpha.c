#include "main.h"

/**
 * _isalpha- function to print alphabet of both case
 * by Mesodan
 * Return:1 for both lowercase and uppercase
 * otherwise 0 for non letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
