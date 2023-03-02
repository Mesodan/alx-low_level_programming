#include "main.h"

/**
 * _strncpy - copy a string
 * @dest:input value
 * @src:input valuee
 * @n:input value 
 * Return: dest
 * /

char *_strncpy(char *dest, char *src, int n)
E{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j]++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}