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
	If (n>0) 
	{ 
		printf("%d Number is positive\n", n);
	} 
	ElseIf (n==0) 
	{ 
		printf("%d Number is Zero\n", n); 
	} 
	Else 
	{ 
		printf("Number is Negative: %d\n", n); 
	}
	return (0);
}

