#include <stdlib.h>
#include <time.h>

/**
 * main - Number is either positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	If (l>5)
	{ 
		printf("Last digit of %d is %d and is greater than 5\n", n,l);
 	} 
	ElseIf (l==0) 
	{ 
		printf("Last digit of  %d is %d and is 0\n", n,l);

	} 
	Elseif (l<6 && l!=0)
	{ 
		printf("Last digit of %d is %d and less than 6 and not 0\n", n,l);
	}
	return (0);
}

