#include <stdlib.h>
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
	If (n>5)
	{ 
		printf("Last digit of n %d and is greater than 5\n", n);
 	} 
	ElseIf (n==0) 
	{ 
		printf("Last digit of  %d is  and is 0\n", n);

	} 
	Elseif (n<6 && n!=0)
	{ 
		printf("Last digit of %d is less than 6 and not 0\n", n);
	}
	return (0);
}

