#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
/* Print n is Psoitive */
	if (n > 0 )

	{
	printf("%d is Positive\n", n);
	}
/* Print n is Negative */
	else if ( n < 0)
	{
		printf ("%d is Negative\n", n);
	}

/* Print n is Zero */
	else 
	{
		printf("%d is Zero\n", n);
	}
 
	return (0);
}
