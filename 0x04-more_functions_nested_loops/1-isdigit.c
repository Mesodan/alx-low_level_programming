#include "main.h"

/**
 * _isdigit- function to print alphabet of both case
 * by Mesodan
 * Return:1 for both lowercase and uppercase
 * otherwise 0 for non letter
 */

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
