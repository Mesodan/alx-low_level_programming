#include "main.h"
/**
 * _isupper- function to check lowercase
 * by Mesodan
 * Return: 1 if it is lowercase
 * otherwise return 0
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
