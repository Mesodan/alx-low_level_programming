include <stdlib.h>
#include <time.h>

/**
 * main - Number is either positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

